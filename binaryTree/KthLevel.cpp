#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        left = right = NULL;
    }
};

static int idx = -1;

Node* buildTree(vector<int> &nodes){
    idx++;
    if(nodes[idx] == -1){
        return NULL;
    }

    Node* root = new Node(nodes[idx]);
    root->left = buildTree(nodes);
    root->right = buildTree(nodes);

    return root;
}

void KthLevel(Node* root , int k , int level){
    if(root==NULL){
        return;
    }
    if(level==k){
        cout<<root->data<<" ";
        return;
    }
    KthLevel(root->left,k,level+1);
    KthLevel(root->right,k,level+1);
}

int main(){
    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = buildTree(nodes);

    KthLevel(root,3,1);
    return 0;
}