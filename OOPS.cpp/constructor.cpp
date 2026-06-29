#include<iostream>
#include<string>
using namespace std;

class Car{

    string name;
    string color;

    public:
        Car(string namevalue , string colorvalue){
            cout<<"constructor is created called object..\n";
            name=namevalue;
            color=colorvalue;
        }

        void start(){
            cout<<"starting car..\n";
        }
        void stop(){
            cout<<"stop car..\n";
        }

        string getName(){
            return name;
        }
        string getColor(){
            return color;
        }
};
int main(){
    Car C1("maruti 800" , "white");
    cout<<C1.getName()<<endl;
    cout<<C1.getColor()<<endl;
    return 0;
};