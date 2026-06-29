#include<iostream>
#include<vector>
#include<string>
using namespace std;

template<class T>
class stack{
    vector<T> vec;
public:
    void push(T val){
        vec.push_back(val);
    }

    void pop(){
        if(isempty()){
            cout<<"stack is empty\n";
            return;
        }
        vec.pop_back();
    }

    T top(){
        /*if(isempty()){
            cout<<"stack is empty\n";
            return -1;
        }
            */
        int lastIdx = vec.size() - 1;
        return vec[lastIdx];
    }

    bool isempty(){
        return vec.size()==0;
    }
};
int main(){
    /*stack<int> s;

    s.push(3);
    s.push(2);
    s.push(1);
    
    
    stack<char> s;

    s.push('C');
    s.push('B');
    s.push('A');

    */

    stack<string> s;

    s.push("chouhan");
    s.push("saurabh");
    s.push("name:");

    while(!s.isempty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}