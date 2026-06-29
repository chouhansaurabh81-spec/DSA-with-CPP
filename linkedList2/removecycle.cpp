#include<iostream>
using namespace std;

class node{
public:
    int data;
    node* next;

     node(int val){
        data=val;
        next=NULL;
     }
};

class list{
    public:
    node* head;
    node* tail;

    list(){
        head=NULL;
        tail=NULL;
    }

    void push_front(int val){
        node* newnode=new node(val);

        if(head==NULL){
            head=tail=newnode;
        }
        else{
            newnode->next = head;
            head=newnode;
        }
    }

    void printlist() {
        node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void removecycle(node* head){
        //detect cycle
        node* slow = head;
        node* fast = head;
        bool iscycle = false;

        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;

            if(slow==fast){
                cout<<"cycle exists\n";
                iscycle=true;
                break;
            }
        }
        if(!iscycle){
            cout<<"cycle doesnot exist\n";
            return;
        }
        slow=head;
        if(slow==fast){      //special case : tail->head
            while(fast->next!=slow){
                fast=fast->next;
            }
            fast->next=NULL;  //remove cycle
        }else{
            node* prev = fast;
            while(slow!=fast){
                slow=slow->next;
                prev=fast;
                fast=fast->next;
            }
            prev->next=NULL;
        }
    }
};

int main(){
    list ll;
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.tail->next=ll.head;
    ll.removecycle(ll.head);
    ll.printlist();
   
    return 0;
}