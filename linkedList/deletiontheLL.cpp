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

     ~node(){
        cout<<"~node ="<<data<<endl;
        if(next!=NULL){
            delete next;
            next=NULL;
        }
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
    ~list(){
        cout<<"~list\n";
        if(head!=NULL){
            delete head;
            head=NULL;
        }
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

    void push_back(int val){
        node* newnode=new node(val);

        if(head==NULL){
            head=tail=newnode;
        }
        else{
            tail->next = newnode;
            tail=newnode;
        }
    }

    void insert(int val , int pos){
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
};

int main(){
    list ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.push_back(4);
    ll.insert(100,2);
    
    ll.print();
    return 0;
}
  

