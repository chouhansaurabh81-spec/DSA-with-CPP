#include<iostream>
#include<iostream>
using namespace std;

class Car{
    public:

    string name;
    string color;
    int *milaege;

    Car(string name , string color){
        this->name=name;
        this->color=color;
        milaege=new int;//dynamic allocation
        *milaege=12;
    }

    Car(Car &original){
        cout<<"copying original to new..\n";
        name=original.name;
        color=original.color;
        milaege=original.milaege;
    }
};
int main(){
    Car C1("fortuner" , "black");

    Car C2(C1);
    cout<<C2.name<<endl;
    cout<<C2.color<<endl;
    cout<<*C2.milaege<<endl;
    *C1.milaege=10;
    cout<<*C2.milaege<<endl;
    return 0;
}