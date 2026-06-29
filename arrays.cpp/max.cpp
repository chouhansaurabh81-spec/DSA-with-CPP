#include<iostream>
using namespace std;
int main(){
    int arr[]={4,5,35,9,11};
    int n=sizeof(arr)/sizeof(int);
   int max=arr[0];
    for(int i=0 ; i<n ; i++){
        if(arr[i]>max){
           max=arr[i];
    }
}
    cout<<"max="<<max<<endl;
      return 0;
}