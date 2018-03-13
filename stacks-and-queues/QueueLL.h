#ifndef QUEUE_LL_H
#define QUEUE_LL_H

class Node{
public:
    int data;
    Node*next;
    Node(int d):data(d),next(NULL){}
};

class QueueLL{
Node*head;
Node*tail;
int current_size;

public:
        QueueLL(){
            head = tail = NULL;
            current_size=0;
        }
        void push(int data){
            if(head==NULL){
                head = tail = new Node(data);
            }
            else{
                tail->next = new Node(data);
                tail = tail->next;
            }
            current_size++;
        }
        void pop(){
            if(current_size>0){
                Node* temp = head;
                head = head->next;
                delete temp;
                current_size--;
            }

        }
        int getFront(){
            return head->data;
        }

        bool isEmpty(){
            return current_size==0?true:false;
        }
        ~QueueLL(){
            ///Write yourself.
        }
};





#endif // QUEUE_LL_H
