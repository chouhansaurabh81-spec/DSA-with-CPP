#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums , int tar){
    unordered_map<int,int> m;
    vector<int> ans;

    for(int i=0 ; i<nums.size() ; i++){
        int first = nums[i];
        int sec = tar - first;

        // FIX 1: find() use karo
        if(m.find(sec) != m.end()){
            ans.push_back(i);
            ans.push_back(m[sec]);
            break;
        }

        // FIX 2: ye loop ke andar hi rahega
        m[first] = i;
    }
    return ans;
}

int main(){
    vector<int> nums = {2,7,11,15};
    int tar = 9;

    vector<int> ans = twoSum(nums,tar);

    // FIX 3: vector ko aise print karo
    cout << ans[0] << " " << ans[1];

    return 0;
}