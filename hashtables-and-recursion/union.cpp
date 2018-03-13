#include<iostream>
#include<unordered_map>
#include<map>
using namespace std;

int main(){
    int a[] = {1,2,4,0,6};
    int b[] = {2,9,8,4,1};

    unordered_map<int,bool> um;
    ///Hash one array
    for(int i=0;i<5;i++){
        um[a[i]] = true;
    }
    ///Search
    for(int i=0;i<5;i++){
        if(um.count(b[i])==1){
            cout<<b[i]<<endl;
        }
    }
    ///UNION
    map<int,bool> myMap;
    for(int i=0;i<5;i++){
        myMap[a[i]] = true;
        myMap[b[i]] = true;
    }
    cout<<endl<<"UNION "<<endl;
    for(auto it=myMap.begin();it!=myMap.end();it++){
        cout<< it->first <<" ";
    }






}
