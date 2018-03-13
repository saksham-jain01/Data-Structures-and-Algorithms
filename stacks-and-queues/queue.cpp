#include<iostream>
#include "QueueLL.h"
using namespace std;

class Queue{
    int *arr;
    int front;
    int rear;
    int current_size;
    int max_size;

public:
    Queue(){
        max_size = 4;
        front = 0;
        rear = max_size-1;
        arr = new int[max_size];
        current_size=0;
    }
    Queue(int init_size){
        max_size = init_size;
        front = 0;
        rear = max_size-1;
        arr = new int[max_size];
        current_size=0;

    }
    void push(int data){
        if(current_size<max_size){
            rear  = (rear + 1)%max_size;
            arr[rear] = data;
            current_size++;
        }
    }
    void pop(){
        if(current_size>0){
            front = (front+1)%max_size;
            current_size--;
        }
    }
    int getFront(){
        return arr[front];
    }
    bool isEmpty(){
        return current_size==0?true:false;
    }
    bool isFull(){
        return current_size==max_size?true:false;
    }
    ~Queue(){
        delete [] arr;
        arr = NULL;
    }


};


int main(){

    Queue q1(10);
    QueueLL q;
    for(int i=1;i<=5;i++){
        q.push(i);
    }
    q.pop();
    q.push(6);

    while(!q.isEmpty()){
        cout<< q.getFront()<<endl;
        q.pop();
    }

return 0;
}
