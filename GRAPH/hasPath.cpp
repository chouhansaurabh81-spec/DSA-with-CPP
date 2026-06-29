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

    bool PathHelper(int src , int dest , vector<bool> &visit){
        if(src == dest){
            return true;
        }

        visit[src] = true;
        list<int> neighbours = l[src];

        for(int v : neighbours){
            if(!visit[v]){
                if(PathHelper(v,dest,visit)){
                    return true;
                }
            }
        }
        return false;
    }
    bool hasPath(int src , int dest){
        vector<bool> visit(v,false);
        return PathHelper(src,dest,visit);
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

    cout<<g.hasPath(0,5)<<endl;
    return 0;
}