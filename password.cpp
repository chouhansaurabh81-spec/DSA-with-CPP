#include<iostream>
using namespace std;
int main(){
    int password;
    cout<<"enter a password:";
    cin>>password;

    (password==1234)?cout<<"open":cout<<"try again=";

    cin>>password;

    (password==1234)?cout<<"open":cout<<"try again=";

    cin>>password;

    (password==1234)?cout<<"open":cout<<"blocked access";
}