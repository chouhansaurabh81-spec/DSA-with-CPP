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

void printpath(vector<int> path){
    cout<<"path=";
    for(int i=0 ; i<path.size() ; i++){
        cout<< path[i]<<" ";
    }
    cout<<endl;
}
void pathhelper(Node* root , vector<int> &path){
    if(root==NULL){
        return;
    }
    path.push_back(root->data);

    if(root->left == NULL && root->right == NULL){
        printpath(path);
        path.pop_back();
        return;
    }
    pathhelper(root->left , path);
    pathhelper(root->right , path);

    path.pop_back();
}
void roottoleafpath(Node* root){
    vector<int> path;
    pathhelper(root , path);
}

int main(){

    int arr[6]={5,1,3,4,2,7};
    Node* root=buildBST(arr,6);
    roottoleafpath(root);
    return 0;

}