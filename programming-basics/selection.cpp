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

//Selection Sort.
for(int i=0;i<=n-2;i++){
    int smallest = i;

    //Find the smallest element
    for(int j=i+1;j<n;j++){
            if(a[j]<a[smallest]){
                smallest = j;
            }
    }
    int temp = a[i];
    a[i] = a[smallest];
    a[smallest] = temp;
}

//Output
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}


return 0;
}
