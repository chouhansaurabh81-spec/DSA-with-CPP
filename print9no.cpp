#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"enter n1:";
    cin>>n1;
    cout<<"enter n2:";
    cin>>n2;

    if(n1+n2==9||n1-n2==9||n1*n2==9||n1/n2==9){
        cout<<"number is 9";
    }else{
        cout<<"invalid";
    }
}