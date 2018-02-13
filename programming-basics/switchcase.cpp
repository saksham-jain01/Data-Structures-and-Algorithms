#include<iostream>
using namespace std;

int main(){
char ch;
cin>>ch;
    switch(ch){
    case 'm' :
    case 'M' : cout<<"Monday";
               break;
    case 't' :cout<<"tuesday"<<endl;
               break;
    case 'T' :cout<<"Tuesday"<<endl;
              break;
    default : cout<<"Invalid Option";
    }
    int no;
    cin>>no;

    bool ans = no%2==0?true:false;


return 0;
}
