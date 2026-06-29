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

int SumofNodes(Node* root){
    if(root==NULL){
        return 0;
    }
    
    int leftsum = SumofNodes(root->left);
    int rightsum = SumofNodes(root->right);

    int currsum = leftsum+rightsum+root->data;
    return currsum;
}
int main(){
    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root=buildTree(nodes);
    cout<<"root="<<root->data<<endl;

    cout<<"sum="<<SumofNodes(root);
    cout<<endl;
    return 0;
}