#include<iostream>
#include<vector>
#include<queue>
#include<climits>

using namespace std;

class Edge {

public:

    int v;
    int wt;

    Edge(int v , int wt) {

        this->v = v;
        this->wt = wt;
    }
};

void dijkstra(int src, vector<vector<Edge>>& graph, int v) {

    // min heap
    priority_queue<
        pair<int,int>,
        vector<pair<int,int>>,
        greater<pair<int,int>>
    > pq;

    // distance array
    vector<int> dist(v, INT_MAX);

    // {distance,node}
    pq.push({0, src});

    // source distance
    dist[src] = 0;

    while(pq.size() > 0) {

        int u = pq.top().second;
        pq.pop();

        // neighbours of u
        vector<Edge> edges = graph[u];

        for(Edge e : edges) {

            // relaxation
            if(dist[e.v] > dist[u] + e.wt) {
                dist[e.v] = dist[u] + e.wt;
                pq.push(make_pair(dist[e.v], e.v));
            }
        }
    }

    cout<<"Shortest Distances:"<<endl;

    for(int d : dist) {
        cout<<d<<" ";
    }

    cout<<endl;
}

int main() {

    int v = 6;

    vector<vector<Edge>> graph(v);

    // 0 -> 1 (2)
    graph[0].push_back(Edge(1,2));

    // 0 -> 2 (4)
    graph[0].push_back(Edge(2,4));

    // 1 -> 2 (1)
    graph[1].push_back(Edge(2,1));

    // 1 -> 3 (7)
    graph[1].push_back(Edge(3,7));

    // 2 -> 4 (3)
    graph[2].push_back(Edge(4,3));

    // 4 -> 3 (2)
    graph[4].push_back(Edge(3,2));

    // 3 -> 5 (1)
    graph[3].push_back(Edge(5,1));

    // run dijkstra from source 0
    dijkstra(0, graph, v);

    return 0;
}