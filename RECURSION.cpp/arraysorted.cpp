#include<iostream>
using namespace std;

bool issorted(int arr[],int n,int i){
    if(i==n-1){
        return true;
    }
    if(arr[i]>arr[i+1]){
        return false;
    }
    return issorted(arr,n, i+1);
}
int main(){
    int arr1[5]={1,2,3,4,5};
    cout<<issorted(arr1,5,0);
    return 0;
}