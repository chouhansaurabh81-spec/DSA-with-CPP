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

int height(Node* root){
    if(root==NULL) return 0;
    return max(height(root->left), height(root->right)) + 1;
}

void printLevel(Node* root, int level, int space){
    if(root==NULL){
        cout << " ";
        return;
    }

    if(level == 1){
        cout << root->data;
    }
    else{
        printLevel(root->left, level-1, space);
        for(int i=0;i<space;i++) cout<<" ";
        printLevel(root->right, level-1, space);
    }
}

void printTree(Node* root){
    int h = height(root);
    int space = 4 * h;   // controls spacing

    for(int i=1;i<=h;i++){
        for(int j=0;j<(h-i)*4;j++) cout<<" ";
        printLevel(root, i, space/(i));
        cout<<endl<<endl;
    }
}

int Transform(Node* root){
    if(root==NULL){
        return 0;
    }

    int leftsum = Transform(root->left);
    int rightsum = Transform(root->right);

    int oldvalue = root->data;

    root->data = leftsum + rightsum;

    return root->data + oldvalue;
}
int main(){
    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = buildTree(nodes);

    Transform(root);

    printTree(root);   // 👈 structured output

    return 0;
}
