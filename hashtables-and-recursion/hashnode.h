#ifndef HASH_NODE_H
#define HASH_NODE_H
#include<cstring>
using namespace std;

template<typename V>
class hashNode{
public:
    char *key;
    V value;
    hashNode<V>* next;

    hashNode(char *k,V val){
        key = new char[strlen(k)+1];
        strcpy(key,k);
        value = val;
        next = NULL;
    }
    ~hashNode(){
        if(next!=NULL){
            delete next;
            next = NULL;
        }
        delete [] key;
    }
};

#endif // HASH_NODE_H
