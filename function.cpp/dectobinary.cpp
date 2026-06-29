#include<iostream>
using namespace std;

int dectobinary(int decNum){
    int ans=0 , pow=1;

    while(decNum>0){
        int rem=decNum%2;
            decNum=decNum/2;
            ans=ans+(pow*rem);
            pow=pow*10;
    }
    return ans;
}
int main(){
    int decNum=50;
    cout<<"decimal to binary of decNum = "<<dectobinary(decNum)<<endl;
    return 0;
}