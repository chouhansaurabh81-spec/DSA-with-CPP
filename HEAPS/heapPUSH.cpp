#include<iostream>
#include<vector>
#include<string>

using namespace std;

class heap{
    vector<int> vec;
public:

    void push(int val){
        vec.push_back(val);
        int x = vec.size()-1;
        int parI = (x-1)/2;

        while(parI >= 0 && vec[parI] < vec[x]){
            swap(vec[parI] , vec[x]);
            x = parI;
            parI = (x-1)/2;
        }
    }
    void pop(){

    }
    int top(){
        return vec[0];
    }
    bool empty(){
        return vec.size()==0;
    }
};
int main(){
    heap heap;
    heap.push(50);
    heap.push(10);
    heap.push(100);

    cout<<"top:"<<heap.top()<<endl;
    return 0;
}
