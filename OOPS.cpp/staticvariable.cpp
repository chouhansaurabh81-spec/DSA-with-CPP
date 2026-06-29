#include<iostream>
#include<string>
using namespace std;

void counter(){
   // int count=0;  //normalvariable  isme ouput har bar 1 hi print karega
    static int count=0;  //static variable
    count++;
    cout<<"count:"<<count<<endl;
}
int main(){
    counter();
    counter();
    counter();
    return 0;
}