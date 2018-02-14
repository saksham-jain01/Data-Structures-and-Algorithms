#include<iostream>
using namespace std;

int first7(int a[],int n,int i){

    if(i==n){
        return -1;
    }
    if(a[i]==7){
        return i;
    }
    //Search
    int ans = first7(a,n,i+1);
    return ans;
}


int last7(int a[],int n,int i){

    if(i==n){
        return -1;
    }

    //Search
    int ans = last7(a,n,i+1);
    if(ans==-1){
        if(a[i]==7){
            return i;
        }
    }
    return ans;
}

int main(){

    int a[]= {1,2,3,7,6,5,7};
    cout<<"First occ of 7 is "<<first7(a,7,0);
    cout<<"Last occ of 7 is "<<last7(a,7,0);

    return 0;
}
