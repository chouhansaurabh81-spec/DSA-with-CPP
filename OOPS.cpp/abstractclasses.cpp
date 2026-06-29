#include<iostream>
#include<string>
using namespace std;

//Abstract classe
class shape{
    public:

    virtual void show()=0;  // Abstract function or pure virtual function
};
class circle : public shape{
    public:

    void show(){
        cout<<"draw a circle\n";
    }
};
class square : public shape{
    public:

    void show(){
        cout<<"draw a square\n";
    }
};
int main(){
    circle c1;
    c1.show();

    square s1;
    s1.show();
    return 0;
};