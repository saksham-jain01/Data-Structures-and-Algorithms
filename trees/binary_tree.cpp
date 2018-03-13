#include<iostream>
#include<queue>
using namespace std;

class BTNode{
public:
    int data;
    BTNode* left;
    BTNode* right;
    BTNode(int d):data(d),left(NULL),right(NULL){}
};
BTNode* takeInputLevelOrder(){
    int d;
    cout<<"Enter Root's data ";
    cin>>d;
    queue<BTNode*> q;
    BTNode* root = new BTNode(d);
    q.push(root);

    while(!q.empty()){
        BTNode*f = q.front();
        q.pop();
        cout<<"Enter the data for left & right "<<f->data<<endl;
        int d1,d2;
        cin>>d1>>d2;
        if(d1!=-1){
            f->left = new BTNode(d1);
            q.push(f->left);
        }
        if(d2!=-1){
            f->right = new BTNode(d2);
            q.push(f->right);
        }
    }
    return root;
}
void printLevelOrder(BTNode* root){
    queue<BTNode*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        BTNode* f = q.front();
        if(f==NULL){
            q.pop();
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<< f->data <<" ";
            q.pop();
            if(f->left){
                q.push(f->left);
            }
            if(f->right){
                q.push(f->right);
            }
        }
    }
}
int height(BTNode*root){
    if(root==NULL){
        return 0;
    }
    int LH = height(root->left);
    int RH = height(root->right);
    return max(LH,RH) + 1;
}
int countNodes(BTNode*root){
    if(root==NULL){
        return 0;
    }
    return 1 + countNodes(root->left) + countNodes(root->right);
}

int findDiameter(BTNode* root){
    if(root==NULL){
        return 0;
    }
    int option1 = height(root->left) + height(root->right);
    int option2 = findDiameter(root->left);
    int option3 = findDiameter(root->right);

    return max(option1,max(option2,option3));
}
class hdPair{
public:
    int height;
    int diameter;
};
hdPair findDiameterFast(BTNode*root){
    hdPair p;
    if(root==NULL){
        p.height =0;
        p.diameter =0;
        return p;
    }
    ///Recursive Case
    hdPair left = findDiameterFast(root->left);
    hdPair right = findDiameterFast(root->right);

    p.height = max(left.height,right.height)+1;

    int option1 = left.height + right.height;
    int option2 = left.diameter;
    int option3 = right.diameter;

    p.diameter = max(option1,max(option2,option3));
    return p;
}

void mirror(BTNode* root){
    if(root==NULL){
        return;
    }
    swap(root->left,root->right);
    mirror(root->left);
    mirror(root->right);
}


int main(){
BTNode* root = takeInputLevelOrder();
printLevelOrder(root);
cout<<"Height of tree is "<<height(root)<<endl;
cout<<"Count of nodes is "<<countNodes(root)<<endl;
cout<<"Diameter of tree is "<<findDiameter(root)<<endl;
cout<<"Diameter-Fast of tree is "<<findDiameterFast(root).diameter<<endl;

return 0;
}
