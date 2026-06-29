#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string getSmallestString(int n, int k) {
        string s(n, 'a');
        k = k - n;

        int i = n - 1;
        while (k > 0 && i >= 0) {
            int add = min(25, k);
            s[i] = s[i] + add;
            k -= add;
            i--;
        }
        return s;
    }
};

int main() {
    int n = 3;
    int k = 72;

    Solution obj;
    string ans = obj.getSmallestString(n, k);

    cout << ans << endl;
    return 0;
}
