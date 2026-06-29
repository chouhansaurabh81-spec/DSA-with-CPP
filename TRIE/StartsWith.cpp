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

bool startsWith(string prefix){
    Node* temp = root;

    for(int i=0 ; i<prefix.size() ; i++){
        if(temp->children[prefix[i]]){
            temp = temp->children[prefix[i]];
        }else{
            return false;
        }
    }
    return true;
   }
};

int main(){
    vector<string> words = {"apple" , "app" , "mango" , "man" , "woman"};
    Trie trie;

    for(int i=0 ; i<words.size() ; i++){
        trie.insert(words[i]);
    }

    cout<<trie.startsWith("moon")<<endl;
    return 0;
}