#include<iostream>
#include<cstring>
using namespace std;

int getvowelcount(string str){
    int vowcount=0;

    for(int i=0 ; i<str.length() ; i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            vowcount++;
        }
    }
    return vowcount;
}
int main(){
    string str = "saurabh";
    int count = getvowelcount(str);
    cout<<"Vowel Count: "<<count<<endl;
    return 0;
}