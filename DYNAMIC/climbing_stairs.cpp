#include<iostream>
#include<vector>
using namespace std;
/*
int Countwaymemo(int n , vector<int> &dp){
    if(n==0 || n==1){
        return 1;
    }
    if(dp[n] != -1){
        return dp[n];
    }
    dp[n] = Countwaymemo(n-1 , dp)+Countwaymemo(n-2 , dp);
    return dp[n];
}
*/
int Countwaytab(int n){
    vector<int> dp(n+1 , 0);
    dp[0]=1;
    dp[1]=1;

    for(int i=2 ; i<=n ; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}
int main(){
    int n = 5;
    //vector<int> dp(n+1 , -1);

    cout<<Countwaytab(n)<<endl;
    return 0;
}