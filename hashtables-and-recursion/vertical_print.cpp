#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node*left,*right;
    Node(int d):data(d),left(NULL),right(NULL){}
    };

    unordered_map<int,vector<int> > treeMap;

    void traverse(Node*root,int d=0){
        if(root==NULL){
            return;
        }
        treeMap[d].push_back(root->data);
        traverse(root->left,d-1);
        traverse(root->right,d+1);

    }



int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->left->right->right = new Node(8);
    root->right->right->right = new Node(9);

    traverse(root);

    int min_key = -2;
    int max_key = +3;
    for(int key=min_key;key<=max_key;key++){
        auto it = treeMap[key].begin();
        while(it!=treeMap[key].end()){
                cout<<*it<<" ";
            it++;
        }
        cout<<endl;
        /*
        unordered_map<int,vector<int> >::iterator  it = myMap.find(key);
       vector<int>::iterator itv = (it->second).begin();
        */
    }


return 0;
}



