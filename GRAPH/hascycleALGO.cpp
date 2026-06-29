#include<iostream>
#include<list>
#include<vector>
#include<queue>

using namespace std;

class Graph {

    int v;
    list<int>* l;

public:

    Graph(int v) {
        this->v = v;
        l = new list<int>[v];
    }

    // directed graph
    void addedge(int u , int v) {
        l[u].push_back(v);
    }

    void calculateIndegree(vector<int>& indeg) {

        for(int u = 0 ; u < v ; u++) {

            for(int neighbour : l[u]) {
                indeg[neighbour]++;
            }
        }
    }

    bool hasCycle() {

        vector<int> indeg(v,0);

        calculateIndegree(indeg);

        queue<int> q;

        // push indegree 0 nodes
        for(int i = 0 ; i < v ; i++) {

            if(indeg[i] == 0) {
                q.push(i);
            }
        }

        int count = 0;

        while(!q.empty()) {

            int curr = q.front();
            q.pop();

            count++;

            for(int neighbour : l[curr]) {

                indeg[neighbour]--;

                if(indeg[neighbour] == 0) {
                    q.push(neighbour);
                }
            }
        }

        return count != v;
    }
};

int main() {

    Graph g(3);

    g.addedge(0,1);
    g.addedge(1,2);
    g.addedge(2,0);

    if(g.hasCycle()) {
        cout<<"Cycle Exists";
    }
    else {
        cout<<"No Cycle";
    }
}