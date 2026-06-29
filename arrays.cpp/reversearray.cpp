//using extra spaces

#include<iostream>
using namespace std;

int printArray(int arr[],int n){
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<",";
    }
}
int main(){
    int arr[]={4,3,2,9,5};
    int n=sizeof(arr)/sizeof(int);

    int copyarr[n];
    for(int i=0 ; i<n ; i++){
        int j=n-i-1;
        copyarr[i]=arr[j];
    }
    for(int i=0 ; i<n ; i++){
        arr[i]=copyarr[i];
    }
    printArray(arr,n);
    return 0;
}