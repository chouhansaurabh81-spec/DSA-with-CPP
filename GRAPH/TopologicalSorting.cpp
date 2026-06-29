#include<iostream>
#include<list>
#include<vector>
#include<stack>
using namespace std;

class Graph{
    int v;
    list<int>* l;

public:
    Graph(int v){
        this->v = v;
        l = new list<int>[v];
    }

    // directed edge
    void addedge(int u , int v){
        l[u].push_back(v);
    }

    void topoHelper(int src , vector<bool> &vis , stack<int> &s){
        vis[src] = true;

        list<int> neighbours = l[src];
        for(int v : neighbours){
            if(!vis[v]){
                topoHelper(v, vis, s);
            }
        }

        s.push(src); // 🔥 important
    }

    void topoSort(){
        vector<bool> vis(v,false);
        stack<int> s;

        for(int i=0 ; i<v ; i++){
            if(!vis[i]){
                topoHelper(i,vis,s);
            }
        }

        while(!s.empty()){
            cout<<s.top()<<" ";
            s.pop();
        }
        cout<<endl;
    }
};

int main(){
    Graph graph(6);

    graph.addedge(2,3);
    graph.addedge(3,1);

    graph.addedge(4,0);
    graph.addedge(4,1);

    graph.addedge(5,0);
    graph.addedge(5,2);

    graph.topoSort();

    return 0;
}