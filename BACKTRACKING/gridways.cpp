#include<iostream>
#include<string>
#include<vector>

using namespace std;

int gridways(int r , int c , int n , int m, string ans){
    if(r==n-1 && c==m-1){
        cout<<ans<<"\n";
        return 1;
    }
    if(r>=n || c>=m){
        return 0;
    }

    int val1 = gridways(r,c+1,n,m,ans+"R");  //right
    int val2 = gridways(r+1,c,n,m,ans+"D");  //left

    return val1+val2;
}
int main(){
    int n=3;
    int m=3;
    string ans="";
    cout<<"gridways="<<gridways(0,0,n,m,ans);
    return 0;
}