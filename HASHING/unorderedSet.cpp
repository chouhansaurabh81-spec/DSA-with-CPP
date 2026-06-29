#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    unordered_set<int>s;

    s.insert(1);
    s.insert(11);
    s.insert(111);
    s.insert(1111);

    cout<<s.size()<<endl;

}