#include<iostream>
#include<list>
#include<vector>
#include<queue>
using namespace std;

class Graph{
    int v;
    list<int>* l;
    bool isundir;
public:
    Graph(int v , bool isundir = true){
        this->v=v;
        l = new list<int> [v];
        this-> isundir = isundir;
    }
    void addedge(int u , int v){   // u---->v
        l[u].push_back(v);
        if(isundir)
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

    bool direcCyclehelper(int src , vector<bool> &visit , vector<bool> &recpath){
        visit[src] = true;
        recpath[src] = true;
        list<int> neighbour = l[src];

        for(int v : neighbour){
            if(!visit[v]){
                if(direcCyclehelper(v,visit,recpath)){
                    return true;
                }
            }else{
                if(recpath[v]){
                    return true;
                }
            }
        }
        recpath[src] = false;
        return false;
    }
    bool isCycledir(){
        vector<bool> visit(v,false);
        vector<bool> recpath(v,false);

        for(int i=0 ; i<v ; i++){
            if(!visit[i]){
               if (direcCyclehelper(i , visit , recpath)){
                return true;
               }
            }
        }
        return false;
    }
};
int main(){

    Graph g(4 , false);

    g.addedge(1,0);
    g.addedge(0,2);
    g.addedge(2,3);
    g.addedge(3,0);

    cout<<g.isCycledir()<<endl;

    return 0;
}