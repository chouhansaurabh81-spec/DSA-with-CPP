#include<iostream>
using namespace std;

void function(int (*mat)[3] , int n , int m){
    cout<<*(*(mat+2)+1);
}

int main(){
    int mat[3][3]={{1,2,3},
                   {4,5,6},
                   {7,8,9}};
    function(mat,3,3);
}