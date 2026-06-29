#include<iostream>
#include<list>
#include<vector>
#include<queue>
using namespace std;

class Graph{
    int v;
    list<pair<int,int>>* l;
    bool isundir;
public:
    Graph(int v , bool isundir = true){
        this->v=v;
        l = new list<pair<int,int>> [v];
        this-> isundir = isundir;
    }
    void addedge(int u , int v , int wt){   // u--->v (weight)
        l[u].push_back(make_pair(v,wt));
        if(isundir)
            l[v].push_back(make_pair(u,wt));
    }

    void prismAlgo(int src){
        priority_queue<pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>>> pq;

        //(wt , u) -- min heap

        vector<bool> mst(v , false);

        pq.push(make_pair(0,src));
        int ans = 0;

        while(pq.size() > 0){
            int u = pq.top().second;
            int wt = pq.top().first;
            pq.pop();

            if(!mst[u]){
                mst[u] = true;
                ans += wt;
                list<pair<int,int>> neighbours = l[u];
                for(pair<int,int> n : neighbours){
                    int v = n.first;
                    int currwt = n.second;
                    pq.push(make_pair(currwt , v));
                }
            }
        }
        cout<<"final cost of mst = "<<ans<<endl;
    }
};
int main(){

    Graph g(4);

    g.addedge(0,1,10);
    g.addedge(0,2,15);
    g.addedge(0,3,30);

    g.addedge(1,2,40);

    g.addedge(2,3,50);

    g.prismAlgo(0);

    return 0;
}