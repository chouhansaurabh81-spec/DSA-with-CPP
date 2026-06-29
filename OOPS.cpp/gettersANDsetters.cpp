#include<iostream>
#include<string>
using namespace std;

class Student{

   string name;
   float cgpa;
public:
   void getpercentage(){
    cout<<(cgpa*10)<<endl;
   }

   //setters
   void setName(string nameval){
    name=nameval;
   }
   void setCgpa(float cgpaval){
    cgpa=cgpaval;
   }

   //getters
   string getName(){
    return name;
   }
   float getCgpa(){
    return cgpa;
   }
};
int main(){
    Student S1;

    S1.setName("saurabh");
    S1.setCgpa(9.0);

    cout<<S1.getName()<<endl;
    cout<<S1.getCgpa()<<endl;
    return 0;
}