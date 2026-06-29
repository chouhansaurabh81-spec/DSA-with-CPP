#include<iostream>

using namespace std;
//using stl 
/*
template<class T>
class stack{
    list<int> ll;
public:
    
    void push(T val){
        ll.push_front(val);
    }

    void pop(){
        ll.pop_front();
    }

    T top(){
        return ll.front();
    }

    bool isempty(){
        return ll.size()==0;
    }
};
int main(){
    stack<int> s;

    s.push(3);
    s.push(2);
    s.push(1);

    while(!s.isempty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    return 0;
}
    */

    //create stack using linked list 
template<class T>
class node{
public:
    T data;
    node* next;
    node(T val){
     data = val;
     next = NULL;
    }
};
template<class T>
class stack{
public:
     node<T>* head;
     stack(){
        head=NULL;
    }

    void push(T val){
        //push front
        node<T>* newnode = new node<T>(val);
        if(head==NULL){
            head=newnode;
        }else{
            newnode->next=head;
            head=newnode;
        }
    }

    void pop(){
        //pop front

        node<T>* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }

    T top(){
        return head->data;
    }

    bool isempty(){
        return head==NULL;
    }
};
int main(){
    stack<int> s;

    s.push(3);
    s.push(2);
    s.push(1);

    while(!s.isempty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    return 0;
}