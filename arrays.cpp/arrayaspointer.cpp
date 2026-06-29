#include<iostream>
using namespace std;
int main(){
    int a=5;
    int *ptr=&a;
    cout<<ptr<<endl;

    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    cout<<arr<<endl;
    cout<<*arr<<endl;  //arr[0]
    cout<<*(arr+1)<<endl;  //arr[1]
    return 0;
}