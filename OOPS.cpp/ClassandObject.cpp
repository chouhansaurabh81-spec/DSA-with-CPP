#include<iostream>
using namespace std;

class Student{
public:
    string name;
    float cgpa;

    void getpercentage(){
        cout<<(cgpa*10)<<"\n";
    }
};
int main(){
    Student S1;
    S1.name="saurabh";
    S1.cgpa=7.34;
    cout<<S1.name<<endl<<S1.cgpa<<endl;
    S1.getpercentage();
    return 0;
};