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
int count;
for(int i=0;i<=n-2;i++){

    count=0;
    for(int j=0;j<=n-2;j++){
        if(a[j]>a[j+1]){
            //Swap
            int temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
            count++;
        }
    }
    if(count==0){
        break;
    }
}

//Output
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}


return 0;
}
