#include<iostream>
using namespace std;

class Node{

public:
    int data;
    Node* next;
    Node(int d):data(d),next(NULL){}

    ~Node(){
        if(next!=NULL){
            delete next;
            next = NULL;
        }
        //cout<<"Deleting Node "<<data<<endl;
    }

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
        if(head!=NULL){
            Node*temp = head;
            head = head->next;
            delete temp;
        }

    }
    void deleteEnd(){
        Node* temp = head;
        if(head->next==NULL){
            delete head;
            head = tail = NULL;
        }
        else{
            while(temp->next != tail){
                temp = temp->next;
            }
            delete temp->next;
            temp->next = NULL;
            tail = temp;
        }
    }
    void deleteMid(int p){
        if(p==0){
            deleteFront();
        }

        int count=0;
        Node* temp = head;
        while(count<p-1){
            count++;
            temp = temp->next;
        }
        Node* n = temp->next;
        temp->next = n->next;
        n->next = NULL;
        delete n;
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

    static Node* recursiveSearchHelper(Node *start,int key){
        if(start==NULL){
            return NULL;
        }

        if(start->data==key){
            return start;
        }
        return recursiveSearchHelper(start->next,key);
    }
    Node *recursiveSearch(int key){
        return recursiveSearchHelper(head,key);
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
    Node*findMid(){
        Node* slow = head;
        Node* fast = head->next;

        while(fast!=NULL && fast->next!=NULL){
                fast = fast->next->next;
                slow = slow->next;
        }
        return slow;

    }
    ~LinkedList(){
        if(head!=NULL){
            delete head;
            head = NULL;
            tail = NULL;
        }
    }

};

Node* merge(Node* a,Node *b){
    if(a==NULL){
        return b;
    }
    if(b==NULL){
        return a;
    }
    Node *newHead;

    if(a->data < b->data){
        newHead = a;
        newHead->next = merge(a->next,b);
    }
    else{
        newHead = b;
        newHead->next = merge(a,b->next);
    }
    return newHead;
}

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
    //Node* searchNode = l.search(7);
    Node* searchNode = l.recursiveSearch(5);
    if(searchNode!=NULL){
        cout<<"Node found with data as "<<searchNode->data;
    }
    else{
        cout<<"No Node Found"<<endl;
    }
    l.deleteMid(2);
    l.print();
    cout<< l.findMid()->data <<endl;

    LinkedList l1,l2;
    l1.insertAtEnd(1);
    l1.insertAtEnd(3);
    l1.insertAtEnd(5);

    l2.insertAtEnd(2);
    l2.insertAtEnd(4);
    l2.insertAtEnd(6);

    l1.head = l2.head = merge(l1.head,l2.head);
    l1.print();
return 0;
}
