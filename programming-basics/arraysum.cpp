#include<iostream>
using namespace std;

int sumofArray(int a[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum += a[i];
    }
    return sum;
}

int main(){
int a[100];
int n;
cin>>n;

for(int i=0;i<n;i++){
    cin>>a[i];
}

cout<<sumofArray(a,n);

return 0;
}
