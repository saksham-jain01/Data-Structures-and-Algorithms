#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){
///Phone Book - PersonName, Phone Numbers
unordered_map<string,vector<int> > phonebook;

phonebook["CB"].push_back(1122);
phonebook["CB"].push_back(2233);
phonebook["CB"].push_back(3344);

phonebook["XYZ"].push_back(5544);

auto it = phonebook.find("CB");
auto itv = (it->second).begin();

while(itv!=(it->second).end()){
    cout<< *itv <<endl;
    itv++;
}



}
