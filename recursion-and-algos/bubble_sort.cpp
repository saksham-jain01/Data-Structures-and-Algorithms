#include<iostream>
using namespace std;

void bubbleSort(int a[],int n){
    if(n==1){
        return;
    }

    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            swap(a[i],a[i+1]);
        }
    }

    bubbleSort(a,n-1);
    return;
}


int main(){
int a[] = {5,4,3,2,8,1};
bubbleSort(a,6);
for(int i=0;i<6;i++){
    cout<<a[i]<<" ";
}



return 0;
}
