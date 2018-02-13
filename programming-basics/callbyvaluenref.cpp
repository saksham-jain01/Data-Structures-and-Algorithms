#include<iostream>
using namespace std;

void mySwap(int &x,int &y){
int temp = x;
x = y;
y = temp;
cout<<"In My Swap ";
cout<<x<<" "<<y;
return;
}


int main(){

int a=10,b=12;
mySwap(a,b);
cout<<"In Main ";
cout<<a<<" "<<b<<endl;

return 0;
}
