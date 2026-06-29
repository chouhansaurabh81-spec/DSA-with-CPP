#include<iostream>
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

void NodeInRange(Node* root , int start , int end){
    if(root == NULL){
        return;
    }

    if(root->data >= start && root->data <= end){
        NodeInRange(root->left , start , end);
        cout<<root->data<<" ";
        NodeInRange(root->right , start , end);
    }else if(root->data < start){
        NodeInRange(root->right , start , end);
    }else{
        NodeInRange(root->left , start , end);
    }
}

int main(){

    int arr[6]={5,1,3,4,2,7};
    Node* root=buildBST(arr,6);
    NodeInRange(root,2,7);
    return 0;

}