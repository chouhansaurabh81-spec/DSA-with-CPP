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
    ~Car(){
        cout<<"deleting object..\n";
        if(milaege!=NULL){
            delete milaege;
            milaege=NULL;
        }
    }
};
int main(){
    Car C1("fortuner" , "black");
    cout<<C1.name<<endl;
    cout<<C1.color<<endl;
    cout<<*C1.milaege<<endl;

    return 0;
}