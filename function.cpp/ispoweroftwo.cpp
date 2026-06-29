#include<iostream>
using namespace std;

bool ispoweroftwo(int n){
    if(n<=0){
        return false;
    }
    return (n&(n-1))==0;
}
int main(){
    cout<<ispoweroftwo(256)<<endl;
    return 0;
}