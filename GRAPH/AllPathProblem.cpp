#include<iostream>
#include<list>
#include<vector>
#include<string>
using namespace std;

class Graph{
    int v;
    list<int>* l;

public:
    Graph(int v){
        this->v = v;
        l = new list<int>[v];
    }

    void addedge(int u , int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }

    void pathhelper(int src , int dest , vector<bool> &vis , string path){
        if(src == dest){
            cout << path << dest << endl;
            return;
        }

        vis[src] = true;
        path += to_string(src) + " ";
        list<int> neighbours = l[src];

        for(int v : neighbours){
            if(!vis[v]){
                pathhelper(v , dest , vis , path);
            }
        }
        
        path = path.substr(0,path.size()-1);
        vis[src] = false; // 🔥 backtrack
    }

    void printallpaths(int src , int dest){
        vector<bool> vis(v,false);
        string path = "";
        pathhelper(src , dest , vis , path);
    }
};

int main(){
    Graph graph(6);

    graph.addedge(0,3);
    graph.addedge(2,3);
    graph.addedge(3,1);
    graph.addedge(4,0);
    graph.addedge(4,1);
    graph.addedge(5,0);
    graph.addedge(5,2);

    graph.printallpaths(5,1);

    return 0;
}