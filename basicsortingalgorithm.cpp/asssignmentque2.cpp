//(3,6,2,1,8,7,4,5,3,1)


#include<iostream>
using namespace std;

void print(int arr[], int n){
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

/*void bubblesort(int arr[] , int n){
    for(int i=0 ; i<n-1 ; i++){
        for(int j=0 ;j<n-i-1 ; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    print(arr,n);
}
    


    void selectionsort(int arr[], int n){
      for(int i=0 ; i<n ; i++){
        int minidx=i;
        for(int j=i+1 ; j<n ; j++){
            if(arr[j]<arr[minidx]){
                minidx=j;
            }
        }
        swap(arr[i],arr[minidx]);
      }
      print(arr,n);
    }   */

     void insertionsort(int arr[] , int n){
        for(int i=1 ; i<n ; i++){
            int curr=arr[i];
            int prev=i-1;
            while(prev>=0 && arr[prev]>curr){
               swap(arr[prev],arr[prev+1]);
               prev--;
            }
            arr[prev+1]=curr;
        }
        print(arr,n);
     }

int main(){
    int arr[10]={3,6,2,1,8,7,4,5,3,1};
    //bubblesort(arr,10);
   // selectionsort(arr,10);
   insertionsort(arr,10);
    return 0;
}