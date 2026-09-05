class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int noDelete = arr[0];
        int oneDelete = arr[0];
        int answer = arr[0];

        for (int i = 1; i < arr.size(); i++) {
            int x = arr[i];

            int oldNoDelete = noDelete;
            int oldOneDelete = oneDelete;

            noDelete = max(x, oldNoDelete + x);
            oneDelete = max(oldNoDelete,oldOneDelete + x);
            answer = max({answer, noDelete, oneDelete});
        }
        return answer;
    }
};