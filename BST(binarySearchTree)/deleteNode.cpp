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

Node* getinordersuccessor(Node* root){
    while(root->left!=NULL){
        root=root->left;
    }
    return root;
}

Node* deleteNode(Node* root , int val){
    if(root==NULL){
        return NULL;
    }
         //SEARCH NODE
    if(val < root->data){
        root->left=deleteNode(root->left,val);
    }
     else if(val > root->data){
        root->right=deleteNode(root->right,val);
    }
        //NOT FOUND
    else{
        //CASE 1= NO CHILD
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }
          //CASE 2 = ONE CHILD
        if(root->left==NULL || root->right==NULL){
            return root->left==NULL ? root->right : root->left;
        }
          //CASE 3 = TWO CHILDREN
        Node* IS=getinordersuccessor(root->right);
        root->data=IS->data;
        root->right=deleteNode(root->right,IS->data);
    }
    return root;
}

void inorder(Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(){

    int arr[6]={5,1,3,4,2,7};

    Node* root=buildBST(arr,6);

    cout<<"Before Delete:\n";
    inorder(root);

    deleteNode(root,4);

    cout<<"\nAfter Delete:\n";
    inorder(root);

}