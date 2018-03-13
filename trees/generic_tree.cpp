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

return 0;
}

