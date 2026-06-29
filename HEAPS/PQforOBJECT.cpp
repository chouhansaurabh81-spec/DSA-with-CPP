#include <iostream>
#include <queue>
using namespace std;

class Student{
public:
    string name;
    int marks;

    Student(string n, int m){
        name = n;
        marks = m;
    }

    bool operator < (const Student &s) const{
        return marks < s.marks;
    }
};

int main(){

    priority_queue<Student> pq;

    pq.push(Student("Aman",80));
    pq.push(Student("Rahul",95));
    pq.push(Student("Saurabh",90));

    while(!pq.empty()){
        cout<<pq.top().name<<" "<<pq.top().marks<<endl;
        pq.pop();
    }
}