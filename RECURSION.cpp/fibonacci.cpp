#include<iostream>
using namespace std;

int fibonacci(int n){
    if(n==1 || n==0){
        return n;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
    int ans=fibonacci(5);
    cout<<ans<<endl;
    return 0;
}