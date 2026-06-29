#include<iostream>
using namespace std;

void print(int n){
    if(n==0){
        return ;
    }
   cout<<n<<" "; //kaam
   print(n-1);   //nextcall
}
int main(){
    print(50);
    return 0;
}