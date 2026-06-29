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
bool ishelper(Trie &trie , string key){
    if(key.size() == 0){
        return true;
    }
    for(int i=0 ; i<key.size() ; i++){
        string first = key.substr(0,i+1);
        string second = key.substr(i+1);

        if(trie.search(first) && ishelper(trie,second)){
            return true;
        }
    }
    return false;
}
bool iswordBreak(vector<string> dict , string key){
    Trie trie;
    for(int i=0 ; i<dict.size() ; i++){
        trie.insert(dict[i]);
    }
        return ishelper(trie,key);
    }
};

int main(){
    vector<string> dict = {"i" , "like" , "sam" , "samsung" , "mobile" , "ice"};
    Trie trie;
    cout<<trie.iswordBreak(dict,"ilikesam")<<endl;

    return 0;
}