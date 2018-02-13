#include<iostream>
using namespace std;

int main(){
    int n,i,count,val;
    cin>>n;
    i=1;
    val = 1;

    while(i<=n){
        count=1;
        while(count<=i){
            cout<<val<<" ";
            val = val + 1;
            count = count + 1;
        }
        cout<<'\n';
        i = i + 1;
    }

return 0;
}
