#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom( stack<int> &s,int data){
    if(s.empty()){
        s.push(data);
        return;
    }
    int top =s.top();
    s.pop();
    insertAtBottom(s,data);
    s.push(top);
}
void reverseStack( stack<int> &s ){
    if(s.empty()){
        return;
    }
    ///Save the topmost element
    int data = s.top();
    s.pop();
    ///Recursively Reverse the chota stack
    reverseStack(s);
    ///Push the topmost element to bottom.
    insertAtBottom(s,data);
}


int main(){

stack<int> s;
for(int i=1;i<=4;i++){
    s.push(i);
}
reverseStack(s);

while(!s.empty()){
        cout<< s.top() <<endl;
        s.pop();
}

return 0;
}
