#include<iostream>
#include<queue>
#include<functional>
using namespace std;

class Compare{
public:
    bool operator()(int a,int b){
        return a>b;

    }
};


int main(){
    ///Max Heap
    priority_queue<int> p;

    ///Min Heap
    priority_queue<int,vector<int>,Compare> pm;
    ///Min Heap
    priority_queue<int,vector<int>,greater<int> > pq;
    pq.push(5);
    pq.push(3);
    pq.push(7);
    pq.push(1);
    pq.push(6);
    pq.push(4);

    while(!pq.empty()){
        cout<< pq.top() <<endl;
        pq.pop();
    }

return 0;
}



