#include<iostream>
using namespace std;

int main(){
    int x = 10;
    cout<< x <<endl;
    cout<< &x <<endl;

    int *ptr = &x;
    cout<<ptr <<endl;
    cout<< &ptr <<endl;

    cout<< *(&ptr) <<endl;
    cout<< &(*ptr) <<endl;

    *ptr = *ptr + 1;

    cout<<x <<endl;
    cout<< &x <<endl;

    ptr = ptr + 1;
    cout<< ptr <<endl;
    cout<< *ptr <<endl;
    cout << &x <<endl;

    /*
    int **ptr2 = &ptr;
    cout<< ptr2 ;
    */




return 0;
}
