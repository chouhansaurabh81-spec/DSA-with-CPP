#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
#include<unordered_set>
using namespace std;

void printItierary(unordered_map<string,string> tickets){
    unordered_set<string> to;

    for(pair<string,string> ticket : tickets){
        to.insert(ticket.second);
    }
    string start = " ";

    for(pair<string,string> ticket : tickets){
        if(to.find(ticket.first) == to.end()){
            start = ticket.first;
        }
    }

    cout<<start<<"->";
    while(tickets.count(start)){
        string next = tickets[start];
        cout<<"->"<<next;
        start = next;
    }
    cout<<"->destination\n";
}
int main(){
    unordered_map<string,string> tickets;

    tickets["chennai"] = "bengaluru";
    tickets["mumbai"] = "delhi";
    tickets["goa"] = "chennai";
    tickets["delhi"] = "goa";

    printItierary(tickets);
    return 0;
}