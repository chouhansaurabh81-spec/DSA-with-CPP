#include <iostream>
#include <vector>
using namespace std;

vector<string> keypad = { "","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void solve(string digits, int idx, string current, vector<string> &ans) {
    // base case
    if (idx == digits.size()) {
        ans.push_back(current);
        return;
    }

    int num = digits[idx] - '0';
    string letters = keypad[num];

    for (char ch : letters) {
        solve(digits, idx + 1, current + ch, ans);
    }
}

int main() {
    string digits;
    cout << "Enter digits: ";
    cin >> digits;

    vector<string> ans;

    solve(digits, 0, "", ans);

    cout << "Combinations: \n";
    for (string s : ans) {
        cout << s << " ";
    }

    return 0;
}