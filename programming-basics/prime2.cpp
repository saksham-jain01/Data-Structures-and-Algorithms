#include<iostream>
using namespace std;

bool isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

void generateAllPrimes(int range){
    for(int i=2;i<=range;i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
}

int main(){
    int range;
    cin>>range;
    generateAllPrimes(range);
    //isPrime(n)?cout<<"Prime":cout<<"Not Prime";
return 0;
}
