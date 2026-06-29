#include<iostream>
using namespace std;

void numbers(int n){
    if(n==1){
        cout<<"1"<<endl;
        return;
    }
   cout<<n<<" ";
   numbers(n-1);
};
int main(){
    numbers(5);
    return 0;
}