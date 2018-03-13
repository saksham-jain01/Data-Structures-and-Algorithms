#include<iostream>
#include "hashtable.h"
using namespace std;

class Student{
    public:
    char *name;
    int money;
    Student(){
        name = new char[2];
        name[0] = '\0';
        money = -1;
    }
    Student(char *n,int m){
        name = new char[strlen(n)+1];
        strcpy(name,n);
        money = m;
    }
    void print(){
        cout<<"Name : "<<name<<endl;
        cout<<"Money : "<<money<<endl<<endl;
    }
};

int main(){

    hashtable<Student> ht;
    Student s1("Rajat",100);
    Student s2("Harsh",200);
    Student s3("Ayush",150);
    Student s4("Prateek",130);
    Student s5("Kritik",130);
    Student s6("Shikhar",130);

    ht.insert(s1.name,s1);
    ht.insert(s2.name,s2);
    ht.insert(s3.name,s3);
    ht.insert(s4.name,s4);
    ht.insert(s5.name,s5);
    ht.insert(s6.name,s5);

     ht.print();

    char name[100];
    cin>>name;

    Student s = ht.find(name);
    if(s.money==-1){
        cout<<"Didn't find"<<endl;
    }
    else{
        s.print();
    }

    return 0;

}
