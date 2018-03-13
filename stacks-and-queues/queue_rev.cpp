#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void print(queue<int> q){
 ///Print the Queue
    while(!q.empty()){
        cout<< q.front();
        q.pop();
    }

}
int main(){
    queue<int> q;
    ///Push some element in q
    for(int i=1;i<=5;i++){
        q.push(i);
    }
    /// Empty the queue into a stack
    stack<int> s;
    while(!q.empty()){
            s.push(q.front()) ;
            q.pop();
    }
    ///Empty the stack into queue
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
    print(q);
    print(q);



return 0;
}
