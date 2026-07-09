class Solution {
public:

    void solve(vector<int>& nums , int target , vector<int>& temp , vector<vector<int>>& ans , int i){
        if(target == 0){
            ans.push_back(temp);
            return;
        }

        if(i==nums.size() || target<0){
            return;
        }

        temp.push_back(nums[i]);
        solve(nums , target - nums[i] , temp , ans , i);
        temp.pop_back();

        solve(nums , target , temp , ans , i+1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        solve(candidates , target , temp , ans , 0);
        return ans;
    }
};