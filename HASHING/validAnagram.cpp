#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;

bool validAnagram(string s , string t){
    if(s.size() != t.size()){
        return false;
    }

    unordered_map<char,int> freq;

    // Step 1: count characters of s
    for(int i=0 ; i<s.size() ; i++){
        freq[s[i]]++;
    }

    // Step 2: subtract using t
    for(int i=0 ; i<t.size() ; i++){
        if(freq.count(t[i])){   // ✅ yaha change
            freq[t[i]]--;
            
            if(freq[t[i]] == 0){
                freq.erase(t[i]);
            }
        }else{
            return false;
        }
    }

    return freq.size() == 0;
}

int main(){
    string s = "race";
    string t = "care";

    cout<<validAnagram(s,t)<<endl;
    return 0;
}