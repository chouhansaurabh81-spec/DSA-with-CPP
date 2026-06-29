#include<iostream>
#include<list>
#include<vector>
#include<queue>
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

    void DFS(int u , vector<bool> &visit){
        visit[u] = true;
        cout<<u<<" ";

        list<int> neighbour = l[u];
        for(int v : neighbour){
            if(!visit[v]){
                DFS(v,visit);
            }
        }
    }
};
int main(){
    Graph g(7);

    g.addedge(0,1);
    g.addedge(0,2);
    g.addedge(1,3);
    g.addedge(2,4);
    g.addedge(3,4);
    g.addedge(3,5);
    g.addedge(4,5);
    g.addedge(5,6);

    vector<bool> visit(7,false);
    g.DFS(0,visit);
    return 0;
}