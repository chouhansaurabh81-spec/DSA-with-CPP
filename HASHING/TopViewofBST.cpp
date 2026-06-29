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
        this->data = data;  // ✅ fix
        left = right = NULL;
    }
}; // ✅ semicolon

// Top View Function
vector<int> topView(Node* root) {
    map<int, vector<int>> mp;
    queue<pair<Node*, int>> q;

    q.push({root, 0});

    while(!q.empty()){
        auto front = q.front();
        Node* node = front.first;
        int hd = front.second;
        q.pop();

        mp[hd].push_back(node->data);

        if(node->left) q.push({node->left, hd - 1});
        if(node->right) q.push({node->right, hd + 1});
    }

    vector<int> ans;

    for(auto x : mp){
        ans.push_back(x.second[0]); // top view
    }

    return ans;
}

int main(){
    Node* root = new Node(20);
    root->left = new Node(8);
    root->right = new Node(22);

    root->left->left = new Node(5);
    root->left->right = new Node(3);

    root->right->right = new Node(25);

    root->left->right->left = new Node(10);
    root->left->right->right = new Node(14);

    vector<int> result = topView(root); // ✅ fix

    cout << "Top View: ";
    for(int x : result){
        cout << x << " ";
    }

    return 0;
}