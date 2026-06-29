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
class Fish: public Animal{
    public:
    int fin;

    void swin(){
        cout<<"swims\n";
    }
};
int main(){
    Fish F1;

    F1.fin=3;
    cout<<F1.fin<<endl;
    F1.swin();
    F1.color="black\n";
    cout<<F1.color;
    F1.eat();
    F1.breathe();
    return 0;
};
