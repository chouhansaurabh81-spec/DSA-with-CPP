#include<iostream>
using namespace std;

int tilingproblem(int n){  //2*n
    if(n==0 || n==1){
        return 1;
    }
    //vertical   2*(n-1)
    int ans1 = tilingproblem(n-1);
    //horizontal  2*(n-2)
    int ans2 = tilingproblem(n-2);

    return ans1+ans2;
}
int main(){
    cout<<tilingproblem(5);
    return 0;
}