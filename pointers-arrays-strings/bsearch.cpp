#include<iostream>
using namespace std;

int binarySearch(int a[],int n,int key){
    int s = 0, e = n-1;
    int m;

    while(s<=e){
        m = (s+e)/2;
        if(a[m]==key){
            return m;
        }
        else if(a[m]>key){
            e = m - 1;
        }
        else{
            s = m + 1;
        }
    }
return -1;
}


int main(){
    int a[100],n,key;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter key to find ";
    cin>>key;
    int index = binarySearch(a,n,key);
    if(index!=-1){
        cout<<"Found at index "<<index;
    }
    else{
        cout<<"Not found ! ";
    }

return 0;
}
