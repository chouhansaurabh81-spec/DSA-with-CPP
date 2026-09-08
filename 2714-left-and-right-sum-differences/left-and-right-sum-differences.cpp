class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int totalsum = 0;
        for(int num : nums){
            totalsum += num;
        }
        vector<int> ans;
        int leftsum = 0;

        for(int i=0 ; i<nums.size() ; i++){
            int rightsum = totalsum - leftsum - nums[i];
            ans.push_back(abs(leftsum - rightsum));

            leftsum += nums[i];
        }
        return ans;
    }
};