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

    bool UndirecCyclehelper(int src , int par , vector<bool> &visit){
        visit[src] = true;
        list<int> neighbour = l[src];

        for(int v : neighbour){
            if(!visit[v]){
                if(UndirecCyclehelper(v,src,visit)){
                    return true;
                }
            }else{
                if(v != par){
                    return true;
                }
            }
        }
        return false;
    }
    bool isCycleUndir(){
        vector<bool> visit(v,false);
        return UndirecCyclehelper(0 , -1 , visit);
    }
};
int main(){
    int v = 5;
    Graph g(v);

    g.addedge(0,1);
    g.addedge(0,2);
    g.addedge(0,3);

    g.addedge(1,2);

    g.addedge(3,4);

    cout<<g.isCycleUndir()<<endl;

    return 0;
}