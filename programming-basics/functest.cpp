#include<iostream>
using namespace std;

//Forward Declaration
//void printHello(int );

void printHello(int x){
    cout<<"Hello World !"<<x;
return;
}

float square(int no){
    float ans=no*no;
return ans;
}
int add(int a,int b){
return a+b;
}
int main(){
    int n;
    cin>>n;
    printHello(n);
    float ans1= square(n);
    cout<<ans1<<endl;
    cout<<add(5,4);
return 0;
}


