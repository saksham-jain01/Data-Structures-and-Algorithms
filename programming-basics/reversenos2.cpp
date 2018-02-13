#include<iostream>
using namespace std;

int main(){

int a[10] = {0};
int i;

cout<<sizeof(a)<<" ";
cout<<"Enter 5 Numbers ";

/*
for(i=0;i<5;i++){
    cin>>a[i];
}
*/

for(i=0;i<=9;i++){
    a[i] = i*i;
    cout<<a[i]<<" ";
}

return 0;
}
