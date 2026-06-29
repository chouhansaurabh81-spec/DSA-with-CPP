#include<iostream>

using namespace std;

class counter{
    public:
    static int x;
    
};
int counter ::x=0;

int main(){
    counter c1;
    counter c2;
    counter c3;

    cout<<"counter 1: "<<c1.x++<<endl;
    cout<<"counter 2: "<<c1.x++<<endl;
    cout<<"counter 3: "<<c1.x++<<endl;
    return 0;
}