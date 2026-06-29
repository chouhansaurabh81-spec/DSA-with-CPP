#include<iostream>
using namespace std;

bool searchinmatrix(int mat[][4] , int n , int m , int key){
    int i=0 , j=m-1 ; 
    while(i<n && j>=0){
        if(mat[i][j]==key){
            cout<<"key found at : ("<<i<<","<<j<<")"<<endl;
            return true;
        }else if(mat[i][j]>key){
            j--;
        }else{
            i++;
        }
    }
    cout<<"not found:"<<endl;
    return false;
}
int main(){
    int matrix[4][4]={{10,20,30,40},
                      {15,25,35,45},
                      {27,29,37,48},
                      {32,33,39,50}};
    searchinmatrix(matrix,4,4,10);
    return 0;
}