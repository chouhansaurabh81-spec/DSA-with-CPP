/*#include<iostream>
using namespace std;

bool dup(int nums[],int n ){
    for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<n ; j++){
            if(nums[i]==nums[j]){
                return true;
            }
        }
    }
    return false;
}
int main(){
    int nums[5]={1,2,3,3,4};
    int n=sizeof(nums)/sizeof(int);

    if(dup(nums,n)){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    return 0;
}*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool containsDuplicate(vector<int>& nums){
    sort(nums.begin(),nums.end());
    for(int i=1;i<nums.size();i++){
        if(nums[i-1]==nums[i]){
            return true;
        }
    }return false;
}
int main() {
    vector<int> nums = {1, 2, 3, 4};

    if (containsDuplicate(nums)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}