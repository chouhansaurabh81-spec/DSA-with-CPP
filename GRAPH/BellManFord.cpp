#include<iostream>
#include<vector>
#include<queue>
#include<climits>

using namespace std;

class Edge{
public:
    int v;
    int wt;

    Edge(int v , int wt) {

        this->v = v;
        this->wt = wt;
    }
};

void bellmanFord(int src, vector<vector<Edge>>& graph, int v) {

    // distance array
    vector<int> dist(v, INT_MAX);

    // source distance
    dist[src] = 0;

    for(int i=0 ; i<v-1 ; i++){
        for(int u=0 ; u<v ; u++){
            for(Edge e : graph[u]){
                if(dist[e.v] > dist[u] + e.wt) {
                dist[e.v] = dist[u] + e.wt;
                }
            }
        }
    }
    for(int i=0 ; i<v ; i++){
        cout<<dist[i]<<" ";
    }
    cout<<endl;
};
int main() {

    int v = 5;

    vector<vector<Edge>> graph(v);

    graph[0].push_back(Edge(1,2));
    graph[0].push_back(Edge(2,4));

    graph[1].push_back(Edge(2,-4));

    graph[2].push_back(Edge(3,2));

    graph[3].push_back(Edge(4,4));

    graph[4].push_back(Edge(1,-1));

    bellmanFord(0, graph, v);

    return 0;
}