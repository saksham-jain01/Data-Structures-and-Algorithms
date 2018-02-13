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

//Bubble Sort.
for(int i=0;i<=n-2;i++){

    for(int j=0;j<=n-i-2;j++){
        if(a[j]>a[j+1]){
            //Swap
            int temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
        }
    }
}

//Output
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}


return 0;
}
