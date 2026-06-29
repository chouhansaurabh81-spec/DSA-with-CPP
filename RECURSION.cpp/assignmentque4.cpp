#include<iostream>
using namespace std;

void TohCal(int N , char source, char help, char dest){
    if(N==1){
        cout << "Move disk " << N << " from rod " << source << " to rod " << dest << endl;
        return ;
    }
    TohCal(N-1,source,dest,help);
    cout << "Move disk " << N << " from rod " << source << " to rod " << dest << endl;

    TohCal(N-1,help,source,dest);
}
int main(){
    int N=4;
    TohCal(4,'A', 'B', 'C');
    return 0;
}