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
  

