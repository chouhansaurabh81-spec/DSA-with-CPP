#include<iostream>
#include<list>
#include<vector>
#include<queue>

using namespace std;

class Graph{
    int v;
    list<int>* l;
public:
    Graph(int v){
        this->v=v;
        l = new list<int> [v];
    }
    void addedge(int u , int v){
        l[u].push_back(v);
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

    void calculateIndegree(vector<int> indeg){
        for(int u=0 ; u<v ; u++){
            list<int> neighbours = l[u];

            for(int v : neighbours){
                indeg[v]++;
            }
        }
    }

    void topoSort2(){
        vector<int> indeg(v , 0);
        calculateIndegree(indeg);
        queue<int> q;

        for(int i=0 ; i<v ; i++){
            if(indeg[i] == 0){
                q.push(i);
            }
        }
        while(q.size() > 0){
            int curr = q.front();
            q.pop();
            cout<<curr<<" ";

            list<int> neighbours = l[curr];
            for(int v : neighbours){
                indeg[v]--;
                if(indeg[v] == 0){
                    q.push(v);
                }
            }
        }
        cout<<endl;
    }
};
int main(){
    Graph graph(5);

    graph.addedge(2,3);
    graph.addedge(3,1);

    graph.addedge(4,0);
    graph.addedge(4,1);

    graph.addedge(5,0);
    graph.addedge(5,2);

    graph.topoSort2();
    return 0;
}