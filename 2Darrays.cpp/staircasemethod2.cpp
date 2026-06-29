#include<iostream>
using namespace std;

bool search(int mat[][3] , int n , int m , int key){
    int i=0 ,j=m-1 ; 
     while(i<n && j>=0){
        if(mat[i][j]==key){
            cout<<"found at:("<<i<<","<<j<<")"<<endl;
            return true;
        }else if(mat[i][j]<key){
            i++;
        }else{
            j--;
        }
     }
     cout<<"not found"<<endl;
     return false;
}
int main(){
    int matrix[3][3]={{1,2,3},
                      {4,5,6},
                      {7,8,9}};
    search(matrix,3,3,8);
    return 0;
}