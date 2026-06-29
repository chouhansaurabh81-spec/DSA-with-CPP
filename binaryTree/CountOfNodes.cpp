#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
     int data;
     Node* left;
     Node* right;

     Node(int data){
        this->data=data;
        left=right=NULL;
     }
};

static int idx = -1;

Node* buildTree(vector<int> nodes){
    idx++;
   if(nodes[idx]==-1){
    return NULL;
   }

   Node* Currnode = new Node(nodes[idx]);
   Currnode->left=buildTree(nodes);
   Currnode->right=buildTree(nodes);

   return Currnode;
}

int countNodes(Node* root){
    if(root==NULL){
        return 0;
    }

    int leftcount = countNodes(root->left);
    int rightcount = countNodes(root->right);

    return leftcount+rightcount+1;
}
int main(){
    vector<int> nodes = {1,2,4,-1,-1,5,-1,6,-1,7,-1,-1,3,-1,-1};
    Node* root=buildTree(nodes);
    cout<<"root="<<root->data<<endl;

    cout<<"count="<<countNodes(root);
    cout<<endl;
    return 0;
}