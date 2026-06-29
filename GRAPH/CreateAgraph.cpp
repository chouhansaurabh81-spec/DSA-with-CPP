#include<iostream>
#include<list>
#include<vector>
using namespace std;

class Graph{
    int v;
    list<int>* l;
public:
    Graph(int v){
        this->v=v;
        l = new list<int> [v];
    }
    void addedge(int u , int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }

    void print(){
        for(int u=0 ; u<v ; u++){
            list<int> neighbours = l[u];
            cout<<u<<" : ";
            for(int v : neighbours){
                cout<< v <<" ";
            }
            cout<<endl;
        }
    }
};
int main(){
    Graph graph(5);

    graph.addedge(0,1);
    graph.addedge(1,2);
    graph.addedge(1,3);
    graph.addedge(2,3);
    graph.addedge(2,4);

    graph.print();
    return 0;
}