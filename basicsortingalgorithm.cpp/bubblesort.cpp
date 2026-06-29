#include<iostream>
using namespace std;

void print(int arr[] , int n){
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bubblesort(int arr[] , int n){
    for(int i=0 ; i<n-1 ; i++){
        for(int j=0 ; j<n-i-1 ; j++){
            if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            }
        }
    }
    print(arr,n);
}
int main(){
    int arr[10]={55,44,15,37,24,56,84,4,59,24};
    bubblesort(arr,10);
    return 0;
}