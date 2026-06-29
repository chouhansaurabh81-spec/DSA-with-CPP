#include<iostream>
#include<string>
using namespace std;

class base{
    public:
    virtual void print(){
        cout<<"base"<<endl;
    }
};
class derived:public base{
    public:
    void print() override{
       cout<<"derived"<<endl;
    }
};
int main(){
    base* b=new derived();
    b->print();
    delete b;
    return 0;
}