#ifndef HASH_TABLE_H
#define HASH_TABLE_H
#include "hashnode.h"
#include<cstring>
using namespace std;

template<typename V>
class hashtable{

    int tableSize;
    int currentSize;
    hashNode<V> **buckets;

    int hashFn(char *key){
        int ans = 0;
        int currentPower = 1;
        int L = strlen(key);

        for(int i=0;i<L;i++){
            ans = ans + currentPower*key[L-i-1];
            currentPower *= 37;
            currentPower %= tableSize;
            ans = ans%tableSize;
        }
        return ans;
    }
    void rehash(){
        cout<<"In Rehash "<<endl;
        int oldTableSize = tableSize;
        tableSize *=2;
        currentSize = 0;
        hashNode<V>** oldBuckets = buckets;
        buckets = new hashNode<V>*[tableSize];
        for(int i=0;i<tableSize;i++){
            buckets[i] = NULL;
        }

        for(int i=0;i<oldTableSize;i++){
            hashNode<V>* temp = oldBuckets[i];
            while(temp!=NULL){
                insert(temp->key,temp->value);
                temp = temp->next;
            }
            delete oldBuckets[i];
        }
        delete [] oldBuckets;
    }
public:

    hashtable(){
        currentSize = 0 ;
        tableSize = 7;
        buckets = new hashNode<V>*[tableSize];
        for(int i=0;i<tableSize;i++){
            buckets[i] = NULL;
        }
    }
    void insert(char*key, V value){
        int i = hashFn(key);

        hashNode<V> *node = new hashNode<V>(key,value);
        node->next = buckets[i];
        buckets[i] = node;

        currentSize++;

        float load_factor = (float)currentSize/tableSize;
        if(load_factor > 0.7){
            cout<<"LF is "<<load_factor<<endl;
            rehash();
        }

    }
    V find(char *key){
        int i = hashFn(key);

        hashNode<V> *temp = buckets[i];
        while(temp!=NULL){
            if(strcmp(key,temp->key)==0){
                return temp->value;
            }
            temp = temp->next;
        }
        V v;
        return v;
    }
    void remove(char *key){
        ///Homework


    }
    void print(){
        for(int i=0;i<tableSize;i++){
            cout<<"Bucket "<<i<<" -->";
            hashNode<V>*temp = buckets[i];
            while(temp!=NULL){
                    cout<< temp->key <<"-->";
                    temp = temp->next;

            }
            cout<<endl;
        }
    }
    ~HashTable(){
        for(int i=0;i<tableSize;i++){
            if(buckets[i]!=NULL){
                delete buckets[i];
            }
        }
        delete [] buckets;
    }
};



#endif // HASH_TABLE_H
