#include<iostream>
#include<cstring>
#include "Stack.h"
#include "Node.h"
using namespace std;

class Book{
    char name[20];
    int price;
public:
    Book(char *n,int p){
        strcpy(name,n);
        price = p;
    }
    void print(){
        cout<<"Book : "<<name<<endl;
        cout<<" Price : "<<price <<endl;
    }

};

int main(){
    Stack<int> s;
    for(int i=0;i<5;i++){
        s.push(i);
    }

    while(!s.isEmpty()){
        cout<< s.top()<<endl;
        s.pop();
    }

    Stack<char> sc;
    sc.push('a');
    sc.push('b');
    sc.push('c');

     while(!sc.isEmpty()){
        cout<< sc.top()<<endl;
        sc.pop();
    }
    Book b1("C++",100);
    Book b2("Java",200);

    Stack<Book> sb;
    sb.push(b1);
    sb.push(b2);

    while(!sb.isEmpty()){
        sb.top().print();
        sb.pop();
    }

}

