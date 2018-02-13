#include<iostream>
using namespace std;

int factorial(int n){
    //cout<<"N is "<<n<<endl;
    int ans=1;
    for(int i=2;i<=n;i++){
        ans *= i;
    }
    return ans;
}
int nCr(int n,int r){
    int ans = factorial(n)/(factorial(n-r)*factorial(r));
 return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<nCr(5,3);
    cout<<"Hello";
return 0;
}
