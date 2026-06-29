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
    node* head;
    node* tail;

public:
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

    void insert(int val , int pos){ //main line to understand
        node* newnode=new node(val);

        node* temp = head;

        for(int i=1 ; i<pos-1 ; i++){
            if(temp==NULL){
                cout<<"INVALID POSITION";
                return ;
            }
            temp=temp->next;
        }
        newnode->next=temp->next;
        temp->next=newnode;
    }

    void print() {
        node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    int helper(node* temp , int key){
        if(temp==NULL){
            return -1;
        }
        if(temp->data==key){
            return 0;
        }
        int idx = helper(temp->next , key);
        if(idx==-1){
            return -1;
        }
        return idx+1;
    }
    int searchRec(int key){
        return helper(head,key);
    }
};

int main(){
    list ll;
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    //ll.insert(100,2);

    ll.print();
    cout<<ll.searchRec(4)<<endl;
    return 0;
}