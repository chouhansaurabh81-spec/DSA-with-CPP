#include<iostream>
using namespace std;
int main(){
    string website,visit;
    cout<<"enter your website:";
    cin>>website;

    if(website=="makemytrip"){
        cout<<"enter place 1=international,2=domestic";
        cin>>visit;
        if(visit=="international"){
            cout<<"1=russia,2=turkey";
            cin>>visit;
            if(visit=="russia"){
                cout<<"RS 1000";
            }
            else if(visit=="turkey"){
                cout<<"RS 500";
            }
            else{
                cout<<"invalid";
            }
        }
    else if(visit=="domestic"){
        cout<<"1=india,2=nepal";
        cin>>visit;
            if(visit=="india"){
                cout<<"RS 2000";
            }
            else if(visit=="nepal"){
                cout<<"RS 800";
            }
            else{
                cout<<"invalid";
            }
    }
    else{
        cout<<"invalid";
    }
}
}