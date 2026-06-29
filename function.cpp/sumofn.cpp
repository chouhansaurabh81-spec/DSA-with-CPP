#include<iostream>
using namespace std;

int sumofN(int n){
    int sum=0;

    for(int i=1 ; i<=n ; i++){
        sum=sum+i;
    }
    return sum;
}

int main(){
    cout<<"sum of numbers:"<<sumofN(10)<<endl;
    return 0;
}