#include<iostream>
#include<string>
using namespace std;

void removeDuplicate(string str , string ans , int i , int map[26]){
    if(i==str.size()){
        cout<<"ans:"<<ans;
        return ;
    }
    int mapidx=(int)(str[i]-'a');

    if(map[mapidx]){   //duplicate
        removeDuplicate(str,ans,i+1,map);
        }
    else{   //not a duplicate
        map[mapidx]=true;
        removeDuplicate(str,ans+str[i],i+1,map);
    }   
}
int main(){
    string str="saurabhchouhan";
    string ans="";
    int map[26]={false};

    removeDuplicate(str,ans,0,map);
    return 0;
}