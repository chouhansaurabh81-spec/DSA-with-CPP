#include<iostream>
using namespace std;

int minof2(int n1 , int n2){  //parameters
   if(n1>n2){
    return n2;
   }else{
    return n1;
   }
}

int main(){
    cout<<"min="<<minof2(8,65);  //arguments
    return 0;
}