#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int balancedstringsplit(string s){
    int countR = 0;
    int countL = 0;
    int ans = 0;

    for(int i=0 ; i<s.size() ; i++){
        if(s[i]=='R'){
            countR++;
        }else if(s[i]=='L'){
            countL++;
        }
        if(countR==countL){
            ans++;
            countL=0;
            countR=0;
        }
    }
    return ans;
}
int main(){
    string s = "RLRRLLRLRL";
    int result = balancedstringsplit(s);  // function call
    cout << "result="<<result << endl;   // output print

    return 0;
}