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

    void heapify(int i){
        if(i >= vec.size()){
            return;
        }

        int l = 2*i+1;
        int r = 2*i+2;

        int maxidx = i;
        if(l < vec.size() && vec[l] > vec[maxidx]){
            maxidx = l;
        }
        if(r < vec.size() && vec[r] > vec[maxidx]){
            maxidx = r;
        }
        swap(vec[i] , vec[maxidx]);
        while (maxidx != i){
            heapify(maxidx);
        }
    }
    void pop(){
        //step1
        swap(vec[0] , vec[vec.size()-1]);
        //step2
        vec.pop_back();
        //step3
        heapify(0);

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
    heap.push(9);
    heap.push(4);
    heap.push(8);
    heap.push(1);
    heap.push(2);
    heap.push(5);
    
    while(!heap.empty()){
    cout<<"top:"<<heap.top()<<endl;
    heap.pop();
    }
    return 0;
}
