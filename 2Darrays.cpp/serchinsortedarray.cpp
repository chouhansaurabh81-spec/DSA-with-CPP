#include<iostream>
using namespace std;

int searchmatrix(int mat[][4] , int n , int m , int key){
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            if(mat[i][j]==key){ 
                key==mat[i][j];
                cout<<"key found at:("<<i<<","<<j<<")="<<key<<endl;
                return true;
            }
        }
    }
    cout<<"key not found"<<endl;
    return false;
}
int main(){
    int matrix[4][4]={{10,20,30,40},
                      {15,25,35,45},
                      {27,29,37,48},
                      {32,33,39,45}};



    searchmatrix(matrix,4,4,30);
    return 0;
}