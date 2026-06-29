#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
using namespace std;

class Node{
public:
    unordered_map<char , Node*> children;
    bool EndOfWord;

    Node(){
        EndOfWord = false;
    }
};

class Trie{
    Node* root;

public:
    Trie(){
        root = new Node();
    }

    void insert(string key){
        Node* temp = root;

        for(int i=0 ; i<key.size() ; i++){
            if(temp->children.count(key[i]) == 0){
                temp->children[key[i]] = new Node();
            }
            temp = temp->children[key[i]];
        }

        temp->EndOfWord = true;
    }

   bool search(string key){
    Node* temp = root;

    for(int i=0 ; i<key.size() ; i++){
        if(temp->children.count(key[i]) == 0){
            return false;  // char nahi mila
        }
        temp = temp->children[key[i]]; // move forward
    }
    return temp->EndOfWord;
}

string longestHelper(Node* root , string &ans , string temp){

    for(pair<char , Node*> child : root->children){
        if(child.second->EndOfWord){
            temp += child.first;
            if((temp.size() == ans.size() && temp < ans) ||  (temp.size() > ans.size())){
                ans = temp;
            }
            longestHelper(child.second , ans , temp);
            temp = temp.substr( 0 , temp.size()-1);
        }
    }
}

    string longestStringWithEOW(){
        string ans = "";
        longestHelper(root , ans , "");
        return ans;
    }
};

string longestString(vector<string> dict){
    Trie trie;
    
    for(int i=0 ; i<dict.size() ; i++){
        trie.insert(dict[i]);
    }
    return trie.longestStringWithEOW();
};
int main(){
    vector<string> dict = {"a" , "banana" , "ap" , "app" , "appl" , "apply" , "apple"};
    
    cout<<"longest string = "<<longestString(dict)<<endl;
    return 0;
}