#include<iostream>
using namespace std;

int factorial(int n){
    int fact=1;

    for(int i=1 ; i<=n ; i++){
        fact=fact*i;
    }
    return fact;
}
  int nCr(int n , int c){
    int fact_n=factorial(n);
    int fact_c=factorial(c);
    int fact_nmc=factorial(n-c);

    return fact_n/(fact_c*fact_nmc);
  }

  int main(){
    int n=8 , r=2;
    cout<<nCr(n,r)<<endl;
    return 0;
  }