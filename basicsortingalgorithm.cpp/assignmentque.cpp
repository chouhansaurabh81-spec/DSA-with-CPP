#include<iostream>
#include<algorithm>
using namespace std;

void print(int arr[],int n){
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[10]={3,6,2,1,8,7,4,5,3,1};
    sort(arr,arr+10);
    print(arr,10);
    return 0;
}