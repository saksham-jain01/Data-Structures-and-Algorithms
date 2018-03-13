#include<iostream>
#include "priority_queue.h"
using namespace std;


int main(){
    Priority_Queue pq;

    pq.push(5);
    pq.push(3);
    pq.push(7);
    pq.push(1);
    pq.push(6);
    pq.push(4);

    while(!pq.isEmpty()){
        cout<< pq.getMin() <<endl;
        pq.pop();
    }


return 0;
}
