#include<iostream>
#include<list>
using namespace std;

class Graph{
    int v;
    list<pair<int,int>>* l;
public:
    Graph(int v){
        this->v = v;
        l = new list<pair<int,int>> [v];
    }
    void addedge(int u , int v , int wt){
        l[u].push_back({v,wt});
        l[v].push_back({u,wt});
    }
    void print(){
        for(int u=0 ; u<v ; u++){
            cout<<u<<"->";
            for(auto nbr : l[u]){
                cout<<"("<<nbr.first<<","<<nbr.second<<")";
            }
            cout<<endl;
        }
    }
};
int main(){
    Graph g(5);

    g.addedge(0,1,2);
    g.addedge(1,2,4);
    g.addedge(1,3,1);
    g.addedge(2,3,3);
    g.addedge(2,4,5);

    g.print();
    return 0;
}