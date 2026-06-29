#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int val) {
        data = val;
        next = NULL;
    }
};

class list {
public:
    node* head;
    node* tail;

    list() {
        head = NULL;
        tail = NULL;
    }

    int getsize(node* head) {
        int size = 0;
        while (head != NULL) {
            head = head->next;
            size++;
        }
        return size;
    }

    node* getintersectionnode(node* head1, node* head2) {
        int m = getsize(head1);
        int n = getsize(head2);

        node* t1 = head1;
        node* t2 = head2;
        int diff = 0;

        if (m >= n) {
            diff = m - n;
            for (int i = 0; i < diff; i++) t1 = t1->next;
        } else {
            diff = n - m;
            for (int i = 0; i < diff; i++) t2 = t2->next;
        }

        while (t1 != NULL && t2 != NULL && t1 != t2) {
            t1 = t1->next;
            t2 = t2->next;
        }

        return t1;  // NULL or intersection node
    }

    void connect(node* head1, node* head2, int pos) {
        if (pos == 0) return;

        node* temp = head1;
        while (--pos) temp = temp->next;

        node* tail2 = head2;
        while (tail2->next) tail2 = tail2->next;

        tail2->next = temp;
    }
};

int main() {
    // Create first list: 1 -> 2 -> 3 -> 4 -> 5
    node* head1 = new node(1);
    head1->next = new node(2);
    head1->next->next = new node(3);
    head1->next->next->next = new node(4);
    head1->next->next->next->next = new node(5);

    // Create second list: 9 -> 10
    node* head2 = new node(9);
    head2->next = new node(10);

    list l;

    // Connect 2nd list at node 3 of list 1
    l.connect(head1, head2, 3);

    // Find intersection
    node* intersection = l.getintersectionnode(head1, head2);

    if (intersection)
        cout << "Intersection at node with value: " << intersection->data << endl;
    else
        cout << "No intersection\n";

    return 0;
}
