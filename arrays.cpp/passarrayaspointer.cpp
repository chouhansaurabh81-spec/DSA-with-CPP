#include<iostream>
using namespace std;

void fun(int arr[]){
    arr[0]=1000;
}
void fun2(int *ptr){
    ptr[0]=1000;
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);

    fun(arr);
    fun2(arr);
    cout<<arr[0]<<endl;
    return 0;
}