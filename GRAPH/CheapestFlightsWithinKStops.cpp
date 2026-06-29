#include<iostream>
#include<vector>
#include<queue>
#include<climits>

using namespace std;
class Solution {
public:
    class Info{
    public:
        int u;
        int cost;
        int stops;

        Info(int u , int cost , int stops){
            this->u=u;
            this->cost=cost;
            this->stops=stops;
        }
    };
    int findCheapestPrice(int V, vector<vector<int>>& flights, int src, int dst, int k) {
        queue<Info> q;
        vector<int> dist(V , INT_MAX);

        dist[src]=0;
        q.push(Info(src , 0 , -1));

        while(q.size() > 0){
            Info curr = q.front();
            q.pop();

            for(int i=0 ; i<flights.size() ; i++){
                if(flights[i][0] == curr.u){
                    int V = flights[i][1] ;
                    int wt = flights[i][2] ;
                    
                    if(dist[V] > curr.cost + wt && curr.stops+1 <= k){
                        dist[V] = curr.cost + wt;
                        q.push(Info(V,dist[V],curr.stops+1));
                    }
                }
            }
        }
        if(dist[dst] == INT_MAX){
            return -1;
        }
        return dist[dst];
    }
};
int main() {
    int n = 4;
    vector<vector<int>> flights = {
        {0,1,100},
        {1,2,100},
        {2,3,100},
        {0,3,500}
    };

    int src = 0;
    int dst = 3;
    int k = 1;

    Solution obj;

    int ans = obj.findCheapestPrice( n, flights, src, dst, k);

    cout<<"Cheapest Price = "<<ans<<endl;

    return 0;
}