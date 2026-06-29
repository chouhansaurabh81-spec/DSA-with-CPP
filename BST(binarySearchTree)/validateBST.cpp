#include<iostream>
#include<vector>
using namespace std;

class Node{
public:
    int data;
    Node* right;
    Node* left;

    Node(int data){
        this->data=data;
        right=left=NULL;
    }
};

Node* insert(Node* root , int val){
    if(root==NULL){
        return new Node(val);
    }

    if(val < root->data){
        root->left=insert(root->left,val);
    }
    else{
        root->right=insert(root->right,val);
    }
    return root;
}

Node* buildBST(int arr[] , int n){
    Node* root=NULL;

    for(int i=0;i<n;i++){
        root=insert(root,arr[i]);
    }
    return root;
}

bool validatehelper(Node* root , Node* min , Node* max){
    if(root == NULL){
        return true;
    }
    if(min != NULL && root->data < min->data){
        return false;
    }
    if(max != NULL && root->data > max->data){
        return false;
    }
    return validatehelper(root->left , min , root) && validatehelper(root->right , root , max);
}
bool validateBST(Node* root){
    return validatehelper(root,NULL,NULL);
}

int main(){

    int arr[6]={5,1,3,4,2,7};
    Node* root=buildBST(arr,6);
    cout<<validateBST(root)<<endl;
    return 0;
}