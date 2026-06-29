#include<iostream>
#include<map>
using namespace std;

int main(){
    map< string , int >m;

    m["apple"] = 01;
    m["banana"] = 02;
    m["orange"] = 03;

    //cout<<m["apple"]<<endl;
    
    for(pair< string , int >count:m){
        cout<<count.first<<","<<count.second<<endl;
    }

   // m.erase("apple");
    
    if(m.count("apple")){
        cout<<"exists";
    }else{
        cout<<"doesnt exists";
    }
    return 0;
}