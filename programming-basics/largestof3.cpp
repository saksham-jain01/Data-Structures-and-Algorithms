#include<iostream>
using namespace std;

int main(){
    //This program finds largest of 3 numbers.
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b&&a>c){
        cout<<a<<" is largest"<<endl;
    }
    else if(b>a&&b>c){
        cout<<b<<" is largest "<<endl;
    }
    else{
        cout<<c<<" is largest "<<endl;
    }

return 0;
}
