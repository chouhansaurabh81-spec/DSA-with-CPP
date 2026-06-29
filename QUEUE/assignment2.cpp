#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int cancompletecycle(vector<int>& gas , vector<int>& cost){
    int start=0;
    int totalgas=0;
    int currgas=0;

    for(int i=0 ; i<gas.size() ; i++){
        currgas = currgas + gas[i] - cost[i];
        totalgas = totalgas + gas[i] - cost[i];

        if(currgas<0){
            start=i+1;
            currgas=0;
        }
    }
    return (totalgas>=0) ? start:-1;
};
int main(){

    vector<int> gas  = {1, 2, 3, 4, 5};
    vector<int> cost = {3, 4, 5, 1, 2};

    int ans = cancompletecycle(gas , cost);

    if (ans == -1)
        cout << "Circuit complete karna possible nahi hai" << endl;
    else
        cout << "Start karne ka sahi petrol pump index: " << ans << endl;

    return 0;
}
