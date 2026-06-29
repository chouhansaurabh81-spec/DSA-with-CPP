#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Edge{
public:
    int u;
    int v;
    int wt;
    vector<int> par;
    vector<int> rank;

    Edge(int u , int v , int wt){
        this->u = u;
        this->v = v;
        this->wt = wt;
    }
};
class Graph{
public:
    vector<Edge> edges;
    int V;

    vector<int> par;
    vector<int> rank;

    Graph(int V){
        this->V = V;

        for(int i=0 ; i<V ; i++){
            par.push_back(i);
            rank.push_back(i);
        }
    }
    int find(int x){
        if(par[x] == x){
            return x;
        }
        return par[x] = find(par[x]);
    }
    void unionByRank(int u , int v){
        int parU = find(u);
        int parV = find(v);

        if(rank[parU] == rank[parV]){
            par[parV] = parU;
            rank[parU]++;
        }
        else if(rank[parU] > rank[parV]){
            par[parV] = parU;
        }else{
            par[parU] = parV;
        }
    }
    void addedge(int u , int v , int wt){
        edges.push_back(Edge(u,v,wt));
    }
    void Kruskals(){
        sort(edges.begin() , edges.end() , [](Edge &a , Edge &b){return a.wt < b.wt ;});
        int mincost = 0;
        int count = 0;

        for(int i=0 ; i<edges.size() && count < V-1 ; i++){
            Edge e = edges[i];

            int parU = find(e.u);
            int parV = find(e.v);

            if(parU != parV){
                unionByRank(parU , parV);
                mincost += e.wt;
                count++;
            }
        }
        cout<<"min cost = "<<mincost<<endl;
    }
};
int main(){
    Graph g(4);

    g.addedge(0,1,10);
    g.addedge(0,2,15);
    g.addedge(0,3,30);
    g.addedge(1,3,40);
    g.addedge(2,3,50);

    g.Kruskals();
    return 0;
}