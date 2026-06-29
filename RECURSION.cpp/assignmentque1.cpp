#include<iostream>

using namespace std;

int binsearch(int arr[] , int si , int li , int key){
    if(si>li){
        return -1;
    }
    int mid=si+(li-si)/2;
    if(arr[mid]==key){
        return mid;
    }
    else if(arr[mid]>key){
        return binsearch(arr,si,mid-1,key);
    }else{
        return binsearch(arr,mid+1,li,key);
    }
}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(int);
    cout<<binsearch(arr,0,n-1,5);
    return 0;
}