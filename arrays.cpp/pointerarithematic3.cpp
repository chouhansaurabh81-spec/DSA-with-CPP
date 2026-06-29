#include<iostream>
using namespace std;
int main(){
    int a=4;
    int *ptr=&a;
    int *ptr2=ptr+3;

    cout<<ptr<<endl;
    cout<<ptr2<<endl;

    cout<<ptr2-ptr<<endl;
    return 0;
}