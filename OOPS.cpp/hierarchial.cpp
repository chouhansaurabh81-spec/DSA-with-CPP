#include<iostream>
#include<string>
using namespace std;

class animal{
    public:
     void eat(){
        cout<<"animal eats foods\n";
     }
};

class bird:public animal{
    public:
    void fly(){
        cout<<"bird flies\n";
    }
};
class fish:public animal{
    public:
    void swim(){
    cout<<"fish swim\n";
  }
};
class mammal:public animal{
    public:
    void walk(){
    cout<<"mammal walks\n";
  }
};

int main(){
    bird b1;
    fish f1;
    mammal m1;

    cout<<"--bird--\n";
    b1.eat();
    b1.fly();

    cout<<"--fish--\n";
    f1.eat();
    f1.swim();

    cout<<"--mammal--\n";
    m1.eat();
    m1.walk();

    return 0;
};