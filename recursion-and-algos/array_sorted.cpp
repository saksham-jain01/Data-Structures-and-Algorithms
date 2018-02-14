#include<iostream>
using namespace std;

bool isSorted(int a[],int n){

    if(n==1||n==0){
        return true;
    }
    int chotaArray[100];
    for(int i=1;i<n;i++){
        chotaArray[i-1]= a[i];
    }

    bool chotaArraySorted =isSorted(chotaArray,n-1) ;
    if(a[0]<a[1]&&chotaArraySorted==true){
        return true;
    }
    else{
        return false;
    }


}


int main(){

int a[]={1,2,6,4,5};
if(isSorted(a,5)){
    cout<<"Yes it is sorted";
}
else{
    cout<<"NOT Sorted !";
}

return 0;
}
