#include<iostream>
#include<vector>
#include<list>
#include<queue>

using namespace std;

class graph {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {

        int V = points.size();

        priority_queue< pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

        vector<bool> mst(V, false);

        int src = 0;
        pq.push({0, src});
        int mincost = 0;

        while(pq.size() > 0) {

            int u = pq.top().second;
            int cost = pq.top().first;
            pq.pop();

            if(!mst[u]) {
                mst[u] = true;
                mincost += cost;

                for(int v = 0; v < V; v++) {
                    if( u != v ) {
                        int dist =
                        abs(points[u][0] - points[v][0]) +
                        abs(points[u][1] - points[v][1]);
                        pq.push({dist, v});
                    }
                }
            }
        }
        return mincost;
    }
};
int main() {

    graph g;

    vector<vector<int>> points = { {0,0}, {2,2}, {3,10}, {5,2}, {7,0} };
    int ans = g.minCostConnectPoints(points);
    cout << "Minimum Cost = " << ans << endl;

    return 0;
}