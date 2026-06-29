#include<iostream>
using namespace std;

int factno(int n){
    if(n==1){
        return 1;
    }
    
    return n*factno(n-1);
}
int main(){
    int ans =factno(5);
    cout<<ans<<endl;
    return 0;
}