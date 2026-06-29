#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
using namespace std;

class Node{
public:
    unordered_map<char , Node*> children;
    bool EndOfWord;
    int freq;

    Node(){
        EndOfWord = false;
    }
};

class Trie{
    Node* root;
public:
    Trie(){
        root = new Node();
        root->freq = -1;
    }

    void insert(string key){
        Node* temp = root;

        for(int i=0 ; i<key.size() ; i++){
            if(temp->children.count(key[i]) == 0){
                temp->children[key[i]] = new Node();
                temp->children[key[i]]->freq = 1;
            }else{
                temp->children[key[i]]->freq++;
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

string getprefix(string key){

    Node* temp = root;
    string prefix = " ";

    for(int i=0 ; i<key.size() ; i++){
        prefix += key[i];
        if(temp->children[key[i]]->freq == 1){
            break;
        }
        temp = temp->children[key[i]];
    }
    return prefix;
}
};
void prefixproblem(vector<string> dict){
    Trie trie;

    for(int i=0 ; i<dict.size() ; i++){
        trie.insert(dict[i]);
    }

    for(int i=0 ; i<dict.size() ; i++){
        cout<<trie.getprefix(dict[i])<<endl;
    }
};

int main(){
    vector<string> dict = {"zebra" , "dog" , "dove" , "duck"};
    prefixproblem(dict);
    return 0;
}