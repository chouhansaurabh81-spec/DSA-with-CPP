#include<iostream>
#include<algorithm>
using namespace std;

void print(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main(){
    int arr[8]={1,4,3,1,2,4,3,7};
    //sort(arr,arr+8);                 //ascending order sortingF
    sort(arr,arr+8,greater<int>());   //descending order sorting

    print(arr,8);
    return 0;
}