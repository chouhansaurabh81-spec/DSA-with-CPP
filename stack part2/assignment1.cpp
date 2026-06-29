#include<iostream>
#include<string>
using namespace std;

// Linked List Node
struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

// String palindrome check
bool isPalin(string str) {
    int n = str.size();

    for(int i = 0; i < n/2; i++) {
        if(str[i] != str[n-i-1]) {
            return false;
        }
    }
    return true;
}

// Linked list palindrome check
bool isPalindrome(ListNode* head) {
    string str = "";
    ListNode* temp = head;

    while(temp != NULL) {
        str += to_string(temp->val);
        temp = temp->next;
    }

    return isPalin(str);
}

int main() {
    // Linked list: 1 -> 2 -> 2 -> 1
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(1);

    if(isPalindrome(head)) {
        cout << "Palindrome hai";
    } else {
        cout << "Palindrome nahi hai";
    }

    return 0;
}
