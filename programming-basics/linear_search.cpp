#include<iostream>
using namespace std;

int main(){
int a[10],n,key,i;

cout<<"Enter N ";
cin>>n;


cout<<"Enter numbers ";
for(int i=0;i<n;i++){
    cin>>a[i];
}

cout<<"Enter Key ";
cin>>key;

//Searching
for(i=0;i<n;i++){
    if(a[i]==key){
        cout<<"Found at index "<<i <<endl;
        break;
    }
}
if(i==n){
    cout<<"Not found !";
}


return 0;
}
