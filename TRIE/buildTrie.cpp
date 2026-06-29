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
};

int main(){
    vector<string> words = {"the" , "a" , "there" , "their" , "any" , "thee"};
    Trie trie;

    for(int i=0 ; i<words.size() ; i++){
        trie.insert(words[i]);
    }

    cout<<trie.search("their")<<endl; // 1 (true)
    cout<<trie.search("th")<<endl;    // 0 (false)

    return 0;
}