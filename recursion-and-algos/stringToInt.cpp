#include<iostream>
using namespace std;

int stringToInt(char a[],int n){
    if(n==0){
        return 0;
    }

    int digit = a[n-1]-'0';
    int ans = stringToInt(a,n-1)*10 + digit;
    return ans;
}

int main(){
    char a[]="12345";
    cout<< stringToInt(a,5);

    return 0;
}
