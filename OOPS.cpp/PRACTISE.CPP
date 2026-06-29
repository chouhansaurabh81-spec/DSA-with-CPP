#include<iostream>
#include<string>
using namespace std;

class User{
    private:
      int id;
      string password;

    public:
      string username;

    public:
      User(int id){
        this->id=id;
      }
    string getPassword(){
        return password;
    }
    void setPassword(string password){
        this->password=password;
    }
   
};
int main(){
    User U1(101);
    U1.username="saurabh";
    U1.setPassword("abcd");

    cout<<"username:"<<U1.username<<endl;
    cout<<"password:"<<U1.getPassword()<<endl;
}