#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Node{
   public:
    string key;
    int value;
    Node* next;

    Node(string key , int value){
        this->key=key;
        this->value=value;
        next=NULL;
    }
};
class HashTable{
    int totalSize;
    int currSize;
    Node** table;

    int hashfunction(string key){
        int idx = 0;

        for(int i=0 ; i<key.size() ; i++){
            idx = (idx + key[i]*key[i]) % totalSize;
        }
        return idx%totalSize;
    }

    void rehash(){
        Node** oldtab = table;
        int oldsize = totalSize;

        totalSize = 2*totalSize;
        table = new Node*[totalSize];

        for(int i=0 ; i<totalSize ; i++){
            table[i] = NULL;
        }
        currSize = 0;
        for(int i=0 ; i<oldsize ; i++){
            Node* temp = oldtab[i];
            while(temp != NULL){
                insert(temp->key , temp->value);
                temp = temp->next;
            }
        }
    }
public:
    HashTable(int size){
        totalSize=size;
        currSize=0;

        table = new Node*[totalSize];
        
        for(int i=0 ; i<totalSize ; i++){
            table[i] = NULL;
        }
    }

    void insert(string key , int value){
        int idx = hashfunction(key);

        Node* newNode = new Node(key , value);

        newNode->next = table[idx];
        table[idx] = newNode;

        currSize++;

        double lambda = currSize/(double)totalSize;
        if(lambda > 1){
            rehash();
        }
    }
    bool exists(string key){
        int idx = hashfunction(key);
        Node* temp = table[idx];

        while(temp != NULL){
            if(temp->key == key){
                return true;
            }
            temp = temp->next;
        }
        return false;
    }
    int search(string key){
        int idx = hashfunction(key);
        Node* temp = table[idx];

        while(temp != NULL){
            if(temp->key == key){
                return temp->value;
            }
            temp = temp->next;
        }
        return -1;
    }

    bool remove(string key){
    int idx = hashfunction(key);

    Node* temp = table[idx];
    Node* prev = NULL;

    while(temp != NULL){
        if(temp->key == key){
            // Case 1: head node
            if(prev == NULL){
                table[idx] = temp->next;
            }
            // Case 2: middle / last node
            else{
                prev->next = temp->next;
            }

            delete temp;
            currSize--;

            return true;  // deleted
        }
        prev = temp;
        temp = temp->next;
    }
    return false; // key not found
}
    void print(){
        for(int i=0 ; i<totalSize ; i++){
            Node* temp = table[i];
            cout << i << " -> ";

            while(temp){
                cout << "(" << temp->key << "," << temp->value << ") ";
                temp = temp->next;
            }
            cout << endl;
        }
    }
};

int main(){
    HashTable ht(5);

    ht.insert("apple", 10);
    ht.insert("banana", 20);
    ht.insert("mango", 30);
    ht.insert("grape", 40);
    ht.insert("orange", 50);

    ht.remove("grape");
    ht.print();
    cout<<ht.search("apple") << endl;
}