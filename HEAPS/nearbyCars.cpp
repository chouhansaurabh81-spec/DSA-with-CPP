#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class car{
  public:
    int idx;
    int distsq;

    car(int idx , int distsq){
        this->idx = idx;
        this->distsq = distsq;
    }
    bool operator < (const car &obj)const{
        return this->distsq > obj.distsq;
    }
};
void nearbyCars(vector<pair<int,int>>pos , int k){
    vector<car> cars;

    for(int i=0 ; i<pos.size() ; i++){
        int distsq = (pos[i].first * pos[i].first)+(pos[i].second * pos[i].second);
        cars.push_back(car(i,distsq));
    }
    priority_queue<car> pq(cars.begin() , cars.end());

   for(int i=0 ; i<k ; i++){
    cout<<"car"<<pq.top().idx<<endl;
    pq.pop();
   }
}
int main(){
    vector<pair<int,int>> pos;
    pos.push_back(make_pair(3,3));
    pos.push_back(make_pair(5,-1));
    pos.push_back(make_pair(-2,4));

    int k=2 ;
    nearbyCars(pos,k);
    return 0;
}