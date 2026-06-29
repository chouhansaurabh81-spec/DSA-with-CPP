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

    bool isBipartite(){
        queue<int> q;
        vector<bool> visit(v,false);
        vector<int> color(v,-1);

        q.push(0);
        color[0] = 0;

        while(!q.size() > 0){
            int curr = q.front() ; 
            q.pop();
            list<int> neighbours = l[curr];

            for(int v : neighbours){
                if(!visit[v]){
                    visit[v] = true;
                    color[v] = !color[curr];
                    q.push(v);
                }else{
                    if(color[v] == color[curr]){
                        return false;
                    }
                }
            }
        }
        return true;
    }
};
int main(){

    Graph g(4);

    g.addedge(0,1);
    g.addedge(0,2);
    g.addedge(1,3);
    g.addedge(2,3);

    cout<<g.isBipartite()<<endl;

    return 0;
}