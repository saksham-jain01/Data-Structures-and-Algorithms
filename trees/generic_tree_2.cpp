#include<iostream>
#include<queue>
using namespace std;

class TreeNode{
public:
    int data;
    TreeNode** children;
    int children_count;

    TreeNode(int d){
        data = d;
        children_count =0;
        children = NULL;
    }
    TreeNode(int d,int c){
        data = d;
        children_count = c;
        children = new TreeNode*[c];
    }
};
TreeNode* takeInput(){

    int d,c;
    cout<<"Enter Node Data & Children Count : ";
    cin>>d >>c;

    TreeNode* root = new TreeNode(d,c);
    for(int i=0;i<c;i++){
        root->children[i] = takeInput();
    }
    return root;
}
TreeNode* levelOrderInput(){
    int d,c;

    cout<<"Enter the root data ";
    cin>>d;
    queue<TreeNode*> q;
    TreeNode* root = new TreeNode(d);
    q.push(root);
    while(!q.empty()){
            TreeNode* f = q.front();
            q.pop();
            cout<<"Enter the children count for "<<f->data;
            cin>>c;
            f->children_count = c;
            f->children = new TreeNode*[c];

            for(int i=0;i<c;i++){
                cout<<"Enter the data for "<<i<<"th child of "<<f->data<<" ";
                cin>>d;
                f->children[i] = new TreeNode(d);
                q.push(f->children[i]);
            }
    }
    return root;
}
void print(TreeNode *root){
    if(root==NULL){
        return;
    }
    ///Otherwise Print Current Node & its children.
    cout<<root->data<<" ->";
    for(int i=0;i<root->children_count;i++){
        cout<<root->children[i]->data<<" , ";
    }
     cout<<endl;

    for(int i=0;i<root->children_count;i++){
        //cout<<root->children[i]->data<<" , ";
        print(root->children[i]);
    }
}
int countNodes(TreeNode*root){
    if(root==NULL){
        return 0;
    }
    int count=1;
    for(int i=0;i<root->children_count;i++){
        count += countNodes(root->children[i]);
    }
    return count;
}

void printLevelOrder(TreeNode*root){

queue<TreeNode*> q;
q.push(root);
q.push(NULL);

while(!q.empty()){
    TreeNode* f = q.front();
    if(f==NULL){
        cout<<endl;
        q.pop();
        if(!q.empty()){
            q.push(NULL);
        }
    }
    else{
        cout<< f->data<<" ";
        q.pop();

        for(int i=0;i<f->children_count;i++){
            q.push(f->children[i]);
        }
    }
    }
}
int getHeight(TreeNode*root){
    if(root==NULL){
        return 0;
    }
    ///Recursive Case.
    int H = 0;
    for(int i=0;i<root->children_count;i++){
        int child_height = getHeight(root->children[i]);
        if(child_height>H){
            H = child_height;
        }
    }
    return H+1;
}
int sumOfAllNodes(TreeNode*root){
    if(root==NULL){
        return 0;
    }
    int sum = root->data;
    for(int i=0;i<root->children_count;i++){
        sum+= sumOfAllNodes(root->children[i]);
    }
    return sum;
}

int maxSum(TreeNode* root){
    if(root==NULL){
        return 0;
    }
    ///Recursive Case.
    int csum = root->data;
    for(int i=0;i<root->children_count;i++){
        csum += root->children[i]->data;
    }

    for(int i=0;i<root->children_count;i++){
        int subtree_maxSum = maxSum(root->children[i]);
        if(subtree_maxSum > csum){
            csum = subtree_maxSum;
        }
    }
    return csum;
}
///--------------------Max Sum which returns address & sum
class Pair{
public:
    int sum;
    TreeNode*add;
};
Pair maxSumTwo(TreeNode* root){
     ///Base Case
     Pair p;
     if(root==NULL){
        p.sum =0;
        p.add = NULL;
        return p;
     }
     ///Recursive Case.
     int csum = root->data;
     for(int i=0;i<root->children_count;i++){
        csum+= root->children[i]->data;
     }
     p.sum = csum;
     p.add = root;

     for(int i=0;i<root->children_count;i++){
        Pair subtree_p = maxSumTwo(root->children[i]);
        if(subtree_p.sum > p.sum){
            p.sum = subtree_p.sum;
            p.add = subtree_p.add;
        }
     }
     return p;
}
int main(){
    /*
    TreeNode* root = new TreeNode(1,2);
    root->children[0] = new TreeNode(2);
    root->children[1] = new TreeNode(3);

    cout<< root->data << endl;
    cout<< root->children[0]->data << root->children[1]->data<<endl;
    */
    //TreeNode* root = takeInput();
    TreeNode* root = levelOrderInput();
    print(root);
    printLevelOrder(root);
    cout<<"Count of Nodes is "<<countNodes(root)<<endl;
    cout<<"Max sum is "<<maxSum(root) <<endl;
    cout<<"Max sum(2) is "<<maxSumTwo(root).sum <<endl;
    cout<<"Max Node is "<<maxSumTwo(root).add->data <<endl;


return 0;
}

