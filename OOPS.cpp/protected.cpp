#include<iostream>
#include<string>
using namespace std;

class Animal{
public:
    string color;

    void eat(){
        cout<<"eats\n";
    }
    void breathe(){
        cout<<"breathe\n";
    }
};
class Fish: protected Animal{
    public:
    int fin;

    void swin(){
        eat();//it is in inside the class 
        cout<<"swims\n";
    }
};
int main(){
    Fish F1;

    F1.fin=3;
    cout<<F1.fin<<endl;
    F1.swin();
   
    return 0;
};
