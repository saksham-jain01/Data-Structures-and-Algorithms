#include<iostream>
using namespace std;

int x = 20;

int main(){
    cout<<"Global X " << x <<endl;

    int x = 10;
    cout<<"Local X :"<< x <<endl;

    int i=20;

    for(int i=0;i<4;i++){
        int x=i;
        cout<<x<<endl;
    }
    cout<<x<<endl;
    ::x = ::x + 2;
    cout<<"Global x "<< ::x <<endl;
    cout<<i<<endl;




return 0;
}
