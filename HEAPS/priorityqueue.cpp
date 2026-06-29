#include<iostream>
#include<queue>
using namespace std;

int main(){
/*    priority_queue<int> pq;    //internally max heap ho rha hai

    pq.push(5);
    pq.push(4);
    pq.push(9);
    pq.push(3);
    pq.push(10);

    while(!pq.empty()){
    cout<<"top="<<pq.top()<<endl;
    pq.pop();
    }
    return 0;
}*/
    priority_queue<int , vector<int>, greater<int>> pq;    //min heap ho rha hai

    pq.push(5);
    pq.push(4);
    pq.push(9);
    pq.push(3);
    pq.push(10);

    while(!pq.empty()){
    cout<<"top="<<pq.top()<<endl;
    pq.pop();
    }
    return 0;
}