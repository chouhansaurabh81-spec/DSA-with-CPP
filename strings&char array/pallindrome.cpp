#include<iostream>
#include<cstring>
using namespace std;

bool pallindrome(char word[] , int n){
    int st=0 , end=n-1 ;
    while(st<end){
        if(word[st++]!=word[end--]){
            cout<<"not a pallindrome:"<<endl;
            return false;
        }
    }
    cout<<"pallindrome:"<<endl;
    return true;
}
int main(){
    char word[] = "boob";
    pallindrome(word,strlen(word));
    cout<<"word="<<word<<endl;
    return 0;
}