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

int height(Node* root){
    if(root==NULL){
        return 0;
    }

    int leftht = height(root->left);
    int rightht = height(root->right);

    int currht = max(leftht,rightht)+1;
    return currht;
}

int diameter(Node* root){  //time complexity = 0(N^2)
    if(root==NULL){
        return 0;
    }

    int currdiam = height(root->left) + height(root->right) + 1;
    int leftdiam = diameter(root->left);
    int rightdiam = diameter(root->right);

    return max(currdiam,max(rightdiam,leftdiam));
}

pair<int , int> diameter2(Node* root){   //time complexity = 0(N)
    if(root==NULL){
        return make_pair(0,0);
    }
        //(diameter,height)
    pair<int,int> leftinfo = diameter2(root->left);
    pair<int,int> rightinfo = diameter2(root->right);

    int currdiameter = leftinfo.second + rightinfo.second + 1;
    int finaldiameter = max(currdiameter,max(leftinfo.first,rightinfo.first));
    int finalheight = max(leftinfo.second,rightinfo.second) + 1;

    return make_pair(finaldiameter,finalheight);

}
    
int main(){
    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root=buildTree(nodes);
    cout<<"root="<<root->data<<endl;

    cout<<"diameter2="<<diameter2(root).first;
    cout<<endl;
    return 0;
}