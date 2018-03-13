#include<iostream>
#include<queue>
#include<cstring>
using namespace std;


class Person{
public:
    char name[200];
    int money;
    int wt;

    Person(char *n,int m,int w){
        strcpy(name,n);
        money = m;
        wt = w;
    }
    void print(){
        cout<<name<<endl;
        cout<<money<<" Rs."<<endl;
        cout<<"Weight :"<<wt<<endl<<endl;
    }
};
ostream& operator<<(ostream&os,Person p){
    os<< p.name <<endl;
    os<< p.money<<endl<<endl;
    return os;
}

class myCompare{
public:
    bool operator()(Person &p1,Person &p2){
        //return p1.money > p2.money;
        if(strcmp(p1.name,p2.name)>0){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    priority_queue<Person,vector<Person>,myCompare > pq;
    Person p1("Prateek",500,6);
    Person p2("Arnav",600,5);
    Person p3("Mayank",300,7);

    pq.push(p1);
    pq.push(p2);
    pq.push(p3);

    while(!pq.empty()){
        Person t = pq.top();
        cout<<t<<"Hello";
        pq.pop();
    }


}
