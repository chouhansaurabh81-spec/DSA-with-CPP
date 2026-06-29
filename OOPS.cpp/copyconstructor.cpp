#include<iostream>
using namespace std;

class Car{
public:
    string name;
    string color;

    Car(string name , string color){
        this->name=name;
        this->color=color;
    }
};
int main(){
    Car C1("BMW" , "white");

    Car C2(C1);
    cout<<"name:"<<C2.name<<endl;
    cout<<"color:"<<C2.color<<endl;
    return 0;
}