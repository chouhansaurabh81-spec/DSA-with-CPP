#include<iostream>

using namespace std;

class counter{
    public:
    counter(){
        cout<<"constructor\n";
    }
    ~counter(){
        cout<<"destructor\n";
    }
};
int main(){
    int x=0;
    if(x==0){
        static counter c1;
    }
    cout<<"ending of code\n";
    return 0;
}