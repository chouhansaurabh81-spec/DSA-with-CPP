#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char word[40];
    cin.getline(word,40);

    cout<<"your word was :"<<word<<endl;
    cout<<"length of word:"<<strlen(word)<<endl;
    return 0;
}