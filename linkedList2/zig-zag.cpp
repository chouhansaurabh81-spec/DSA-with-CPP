#include<iostream>
using namespace std;

class node{
public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

class list{
public:
    node* head;
    node* tail;

    list(){
        head = NULL;
        tail = NULL;
    }

    void push_front(int val){
        node* newnode = new node(val);
        if(head == NULL){
            head = tail = newnode;
        } else {
            newnode->next = head;
            head = newnode;
        }
    }

    void push_back(int val){
        node* newnode = new node(val);
        if(head == NULL){
            head = tail = newnode;
        } else {
            tail->next = newnode;
            tail = newnode;
        }
    }

    void print(){
        node* temp = head;
        while(temp != NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    node* splitAthead(node* head){
        node* slow = head;
        node* fast = head;
        node* prev = NULL;

        while(fast != NULL && fast->next != NULL){
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        if(prev != NULL)
            prev->next = NULL;
        
        return slow;
    }

    node* reverse(node* head){
        node* prev = NULL;
        node* curr = head;
        while(curr != NULL){
            node* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    node* zigzagll(node* head){
    if(head == NULL || head->next == NULL)
        return head;

    // 1. Split
    node* righthead = splitAthead(head);

    // 2. Reverse 2nd half
    node* right = reverse(righthead);

    // 3. Alternate Merging
    node* left = head;

    while(left != NULL && right != NULL){
        node* nextleft = left->next;
        node* nextright = right->next;

        left->next = right;

        // if leftNext becomes NULL, attach remaining right and break
        if(nextleft == NULL){
            break;
        }

        right->next = nextleft;

        left = nextleft;
        right = nextright;
    }

    return head;
}

};

int main(){
    list ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(8);
    ll.push_front(4);
    ll.push_front(5);

    ll.print();

    ll.head = ll.zigzagll(ll.head);

    ll.print();
    return 0;
}



