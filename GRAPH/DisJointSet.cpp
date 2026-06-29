#include<iostream>
#include<vector>

using namespace std;

class disjointSet{
public:
    int n;
    vector<int> par;
    vector<int> rank;

    disjointSet(int n){
        this->n = n;

        for(int i=0 ; i<n ; i++){
            par.push_back(i);
            rank.push_back(i);
        }
    }
    int find(int x){
        if(par[x] == x){
            return x;
        }
        return find(par[x]);
    }
    void unionByRank(int a , int b){
        int parA = find(a);
        int parB = find(b);

        if(rank[parA] == rank[parB]){
            par[parB] = parA;
            rank[parA]++;
        }
        else if(rank[parA] > rank[parB]){
            par[parB] = parA;
        }else{
            par[parB] = parA;
        }
    }
    void getInfo(){
        for(int i=0 ; i<n ; i++){
            cout<<i<<"="<<"["<<par[i]<<","<<rank[i]<<"]"<<endl;
        }
    }
};
int main(){
    disjointSet di(6);

    di.unionByRank(0,2);
    cout<<di.find(2)<<endl;
    di.unionByRank(1,3);
    di.unionByRank(2,5);
    di.unionByRank(0,3);
    cout<<di.find(2)<<endl;
    di.unionByRank(0,4);

    di.getInfo();
    return 0;
}