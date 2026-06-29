#include<iostream>
#include<stack>

using namespace std;

void PushAtBottom(stack<int> &s , int val){
    if(s.empty()){
        s.push(val);
        return;
    }

    int temp = s.top();
    s.pop();
    PushAtBottom(s,val);
    s.push(temp);
}
void reverse(stack<int> &s){
    if(s.empty()){
        return;
    }
    int temp = s.top();
    s.pop();
    reverse(s); 
    PushAtBottom(s,temp);
}
void printstack(stack<int> s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
};
int main(){
    stack<int> s;

    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);

    cout << "Original stack: ";
    printstack(s);
    
    reverse(s);

    cout << "Reversed stack: ";
    printstack(s);
    return 0;
}