#include<iostream>
#include<deque>

using namespace std;

class queue{
    deque<int> deq;
    public:

    void push(int x){
       deq.push_back(x);
    }
    void pop(){
        deq.pop_front();
    }
    int front(){
        return deq.front();
    }
    bool empty(){
        return deq.empty();
    }
};
int main(){
    queue q;

    for(int i=1 ; i<=5 ; i++){
        q.push(i);
    }
    for(int i=1 ; i<=5 ; i++){
        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;
}