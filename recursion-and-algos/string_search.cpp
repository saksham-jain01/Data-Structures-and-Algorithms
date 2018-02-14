#include<iostream>
#include<cstring>
using namespace std;

int main(){
int n;
char string_list[100][50];

cout<<"Enter n ";
cin>>n;
cin.get();

for(int i=0;i<n;i++){
    cin>>string_list[i];
    cin.getline(string_list[i],50,' ');
}


for(int i=0;i<n;i++){
    //cout<<string_list[i]<<endl;
}

char key[50];
//cin.get();
cin.getline(key,50);
int i;
for(i=0;i<n;i++){
    if( strcmp(key,string_list[i])==0){
        cout<<"Found at index "<<i<<endl;
        break;
    }
}
if(i==n){
    cout<<"Not Found !";
}


return 0;
}
