#include<iostream>
#include<vector>
using namespace std;

int lastoccur(vector<int> arr , int i , int target){
    if(i==arr.size()){
        return -1;
    }
    int idxfound=lastoccur(arr, i+1 , target);
    if(idxfound==-1 && arr[i]==target){
            return i;
        }
        return idxfound;
    }    
int main(){
    vector<int> arr={1,2,3,3,3,4,5};
    cout<<lastoccur(arr,0,3)<<endl;
    return 0;
}