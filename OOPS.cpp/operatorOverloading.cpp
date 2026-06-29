#include<iostream>
#include<string>
using namespace std;

class complex{
    public:

    int real;
    int img;

    public:
    complex(int r , int i){
        real=r;
        img=i;
    }
    void shownum(){
        cout<<real<<"+"<<img<<"i\n";
    }
    //operator overloading

   complex operator +(complex&c2){
    int resreal=this->real+c2.real;
    int resimg=this->img+c2.img;
    complex c3(resreal,resimg);
    return c3;
   }
};
int main(){
    complex c1(1,2);
    complex c2(3,4);

    c1.shownum();
    c2.shownum();

    complex c3=c1+c2;
    c3.shownum();
    return 0;
};
