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

bool roottoNodepath(Node* root , int n , vector<int> &path){
    if(root==NULL){
        return false;
    }

    path.push_back(root->data);

    if(root->data==n){
        return true;
    }

    bool isleft = roottoNodepath(root->left , n , path);
    bool isright = roottoNodepath(root->right , n , path);

    if(isleft||isright){
        return true;
    }
    path.pop_back();
    return false;
}

int LCA(Node* root , int n1 , int n2){
    vector<int> path1;
    vector<int> path2;

    roottoNodepath(root,n1,path1);
    roottoNodepath(root,n2,path2);

    int LCA = -1;

    for(int i=0,j=0 ; i<path1.size() && j<path2.size() ; i++,j++){
        if(path1[i] != path2[j]){
            break;
        }
        LCA = path1[i];
    }
    return LCA;
}
int main(){
    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = buildTree(nodes);

    int n1=4 , n2=5;
    cout<<"LCA="<<LCA(root,n1,n2)<<endl;
    return 0;
}