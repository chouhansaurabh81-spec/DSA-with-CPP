#include<iostream>
#include<vector>
#include<queue>
#include<map>
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

void TopView(Node* root){
    if(root == NULL) return;
    queue<pair<Node* , int>> q;   //(node,hd)
    map<int , int> m;             //(hd,node->data)

    q.push(make_pair(root,0));
    while(!q.empty()){
        pair<Node* , int> curr = q.front();
        q.pop();

        Node* currnode = curr.first;
        int currHD = curr.second;

        if(m.count(currHD)==0){     //hd-> add in map
            m[currHD]=currnode->data;
        }
        if(currnode->left != NULL){
            pair<Node* , int> left = make_pair(currnode->left , currHD-1);
            q.push(left);
        }
        if(currnode->right != NULL){
            pair<Node* , int> right = make_pair(currnode->right , currHD+1);
            q.push(right);
        }
    }
    for(auto it : m){
        cout<<it.second<<" ";
    }
    cout<<endl;
}
    
int main(){
    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root=buildTree(nodes);
    
    TopView(root);
    return 0;
}