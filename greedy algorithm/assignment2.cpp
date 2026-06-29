#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string largestoddnumber(string num){
    if(num.empty()) return "";
    for(int i=num.size()-1 ; i>=0 ; i--){
        int digit = num[i]-'0';
        if(digit%2==1){
            return num.substr(0,i+1);
        }
    }
    return "";
}
int main(){
    string num = "3592";
    string result = largestoddnumber(num);
    cout<<result<<endl;
    return 0;
}