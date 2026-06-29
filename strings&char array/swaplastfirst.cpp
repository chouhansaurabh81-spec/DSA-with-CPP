#include<iostream>
#include<cstring>
using namespace std;

bool isalmostequal(string s1 , string s2){
    if(s1.length() != s2.length()){
        return false;
    }
    char diffchar1 , diffchar2;
    int diff = 0;

    for(int i=0 ; i<a1.length() ; i++){
        if(s1[i] != s2[i]){
            if(!diff){
                diffchar1=a1[i];
                diffchar2=a2[i];
            }else{
                if(s1[i] != diffchar2 || s2[i] != diffchar1){
                    return false;
                }
                diff++;
            }
            if(diff>2){
                return false;
            }
        }
        if(diff==1){
            return false;
        }
        return true;
    }
}