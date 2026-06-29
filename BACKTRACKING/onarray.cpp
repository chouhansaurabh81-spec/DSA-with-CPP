#include<iostream>
#include<string>
using namespace std;

void printarray(int arr[] , int n){
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void changearray(int arr[] , int n , int i){
    if(i==n){
        printarray(arr,n);
        return ;
    }
    arr[i]=i+1;
    changearray(arr,n,i+1);
    arr[i]-=2;
}
int main(){
    int arr[5]={0};
    int n=5;

    changearray(arr,n,0);
    printarray(arr,n);
    return 0;
}