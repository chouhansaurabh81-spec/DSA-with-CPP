#include<iostream>
#include<string>
using namespace std;

class teacher{
    public:
    int salary ;
    string subject;
};
class student{
    public:
    int rollno;
    float cgpa;
};
class TA : public teacher , public student{
    public:
    string name;
};
int main(){
    TA t1;
    t1.name="saurabh";
    t1.rollno=123;
    t1.cgpa=8.0;
    t1.subject="cse";
    t1.salary=45000;
    cout<<t1.name<<endl;
    cout<<t1.rollno<<endl;
    cout<<t1.cgpa<<endl;
    cout<<t1.subject<<endl;
    cout<<t1.salary<<endl;
};