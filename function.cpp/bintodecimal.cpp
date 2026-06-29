#include<iostream>
using namespace std;

int bintodecimal(int binNum){
    int ans=0,pow=1;

    while(binNum>0){
       int rem=binNum%10;
           ans=ans+(rem*pow);

           binNum=binNum/10;
           pow=pow*2;
    }
    return ans;
}
int main(){
    int binNum=111010;
    cout<<"binary to decimal of binNum = "<<bintodecimal(binNum)<<endl;
    return 0;
}