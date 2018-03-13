#include<iostream>
using namespace std;

class Node{

public:
    int data;
    Node* next;
    Node(int d):data(d),next(NULL){}

};
class LinkedList{
public:
    Node*head;
    Node*tail;

    LinkedList(){
        head = NULL;
        tail = NULL;
    }
    void insertAtFront(int d){
            if(head==NULL){
                head = tail = new Node(d);
            }
            else{
                    Node* n = new Node(d);
                    n->next = head;
                    head = n;
            }
    }
    void insertAtEnd(int d){
        if(head==NULL){
            head = tail = new Node(d);
        }
        else{
            Node *n = new Node(d);
            tail->next = n;
            tail = n;
        }

    }
    void insert(int d,int p){
        if(p==0){
            insertAtFront(d);
        }
        else if(p>=getSize()){
            insertAtEnd(d);
        }
        else{
            int count=0;
            Node*temp = head;
            while(count<p-1){
                temp = temp->next;
                count++;
            }
            Node *n = new Node(d);
            n->next = temp->next;
            temp->next = n;


        }
    }
    void deleteFront(){


    }
    void deleteEnd(){


    }
    void deleteMid(){


    }

    int getSize(){
        int count = 0;
        Node* temp = head;
        while(temp!=NULL){
            count++;
            temp = temp->next;
        }
        return count;
    }
    Node* search(int key){
        Node*temp = head;
        while(temp!=NULL){
            if(temp->data== key){
                return temp;
            }
            temp = temp->next;
        }
        return NULL;

    }
    void print(){
        Node* temp = head;
        while(temp!=NULL){
            cout<< temp->data<<"-->";
            temp = temp->next;
        }
        cout<<endl;
    }

};
int main(){
    LinkedList l;
    l.insertAtFront(1);
    l.insertAtFront(2);
    l.insertAtFront(3);
    l.insertAtFront(4);
    l.insertAtEnd(5);
    l.insertAtEnd(6);
    l.insert(3,20);
    l.print();
    Node* searchNode = l.search(7);
    if(searchNode!=NULL){
        cout<<"Node found with data as "<<searchNode->data;
    }
    else{
        cout<<"No Node Found";
    }
return 0;
}
