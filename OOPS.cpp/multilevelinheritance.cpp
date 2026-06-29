#include<iostream>
#include<string>
using namespace std;

class Animal{
public:
    void eat(){
        cout<<"eats\n";
    }
    void breathe(){
        cout<<"breathe\n";
    }
};
class mammal: public Animal{
    public:
    string bloodtype;

    mammal(){
        bloodtype="warm\n";
    }
};
class dog: public mammal{
    public:
    void tailwag(){
        cout<<"dogs tail its wag\n";
    }
};
int main(){
    dog d1;

    d1.eat();
    d1.breathe();
    d1.tailwag();
    cout<<d1.bloodtype<<endl;

    return 0;
};
