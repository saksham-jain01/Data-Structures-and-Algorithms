#include<iostream>
#include<unordered_map>
#include<map>
using namespace std;

class Car{
public:
    string name;
    int price;

    Car(){}
    Car(string n,int p):name(n),price(p){};
    void print(){
        cout<<name<<endl;
        cout<<price<<endl<<endl;
    }
};


int main(){

    Car c1("Audi",100);
    Car c2("BMW",200);
    Car c3("i10",300);
    Car c4("Ferrari",400);

    ///Init - 1
    map<string,Car> myMap = {{"Rajat",c1}};

    ///Insert -2
    myMap["Arunaditya"] = c2;

    ///Insert - 3
    pair<string,Car> p("Mayank",c3);
    myMap.insert(p);

    myMap["Prateek"] = c4;

    ///Print
    //unordered_map<string,Car>::iterator it;
    for(auto it= myMap.begin();it!=myMap.end();it++){
        cout<< it->first <<endl;
        (it->second).print();
    }
    /*
    for(auto i=0;i<5;i++){
        cout<<i<<endl;
    }*/
    ///Search Using Count
    if(myMap.count("Prateek")==1){
        cout<<"Found !";
        myMap["Prateek"].print();

    }
    ///Erase/Delete
    myMap.erase("Mayank");


    ///Search Using Find
    auto it = myMap.find("Mayank");
    if(it!=myMap.end()){
        cout<<"Found !";
        (it->second).print();
    }
    else{
        cout<<"Not found !"<<endl;
    }
    myMap.clear();






return 0;
}
