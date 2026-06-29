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

    int searchitr(int key){
        node* temp = head;
        int idx=0;

        while(temp!=NULL){
            if(temp->data==key){
                return idx;
            }
            temp=temp->next;
            idx++;
        }
        return -1;
    }


void reverse(){
    node* curr=head;
    node* prev=NULL;

    while(curr!=NULL){
        node* next=curr->next;
        curr->next=prev;

        prev=curr;
        curr=next;
    }
    head=prev;
}
   int getsize(){
    int sz=0;
    node* temp = head;

    while(temp!=NULL){
        temp=temp->next;
        sz++;
    }
    return sz;
   }
 void removeNth(int n){    //tc=0(N);  sc=0(1);
      int size = getsize();
      node* prev = head;

      for(int i=1 ; i<(size-n) ; i++){
        prev=prev->next;
      }
      node* toDel = prev->next;
      cout<<"to deleting :"<<toDel->data<<endl;

      prev->next=prev->next->next;
    }
};

int main(){
    list ll;
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);


    ll.removeNth(2);
    ll.print();
   
    return 0;
}
  