#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;

    (n%2==0 && n%3==0)?cout<<"divisible by both":cout<<"not divisible by both";
}