#include<iostream>
#include<vector>
#include<climits>

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

class info{
 public:
       bool isBST ;
       int min ; 
       int max ;
       int size ;

    info(bool isBST , int min , int max , int size){
        this->isBST=isBST;
        this->min=min;
        this->max=max;
        this->size=size;
    }
};

static int maxsize = 0;

info* largestBST(Node* root){
    if(root==NULL){
        return new info(true , INT_MAX , INT_MIN , 0);
    }
    info* leftinfo = largestBST(root->left);
    info* rightinfo = largestBST(root->right);

    int currmin = min(root->data,min(leftinfo->min,rightinfo->min));
    int currmax = max(root->data,max(leftinfo->max,rightinfo->max));
    int currsize = leftinfo->size + rightinfo->size + 1;

    if(leftinfo->isBST && rightinfo->isBST && root->data > leftinfo->max && root->data < rightinfo->min){
        maxsize = max(maxsize,currsize);

        return new info(true , currmin , currmax , currsize);
    }
    return new info(false , currmin , currmax , currsize);
};
int main(){
    Node* root = new Node(50);
    root->left=new Node(30);
    root->left->left=new Node(5);
    root->left->right=new Node(20);

    root->right=new Node(60);
    root->right->left=new Node(45);
    root->right->right=new Node(70);
    root->right->right->left=new Node(65);
    root->right->right->right=new Node(80);

    largestBST(root);
    cout<<"maxsize = "<<maxsize<<endl;
    return 0;  
}