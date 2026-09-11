class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        long long ans = 0;

        int sum = 0;
        int even = 1;
        int odd = 0;

        for(int i=0 ; i<arr.size() ; i++){
            sum = sum + arr[i];

            if(sum % 2 == 0){
                ans = ans + odd;
                even++;
            }else{
                ans = ans + even;
                odd++;
            }
        }
        return ans % 1000000007;
    }
};