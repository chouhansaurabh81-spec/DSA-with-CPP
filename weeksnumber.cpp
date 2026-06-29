#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter a number:";
    cin>>num;

    if(num==1){
        cout<<"monday";
    }
    else if(num==2){
        cout<<"tuesday";
    }
    else if(num==3){
        cout<<"wednesday";
    }
    else if(num==4){
        cout<<"thursday";
    }
    else if(num==5){
        cout<<"friday";
    }
    else if(num==6){
        cout<<"saturday";
    }
    else if(num==7){
        cout<<"sunday";
    }
    else{
        cout<<"invalid";
    }

}