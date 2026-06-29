#include<iostream>
#include<climits>
using namespace std;

void print(int arr[] , int n){
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}

void countingsort(int arr[] , int n){
   int freq[100000]={0};
   int minval=INT_MAX , maxval=INT_MIN;

    for(int i=0 ; i<n ; i++){
        minval= min(minval,arr[i]);
        maxval= max(maxval,arr[i]);
        freq[arr[i]]++ ;
    }
    
    int j=0;
    for(int i=minval ; i<maxval ; i++){
        while(freq[i]>0){
            arr[j++]=i;
            freq[i]-- ;
        }
    }
    print(arr,n);
}
int main(){
    int arr[8]={1,4,3,1,2,4,3,7};
    countingsort(arr,8);
}