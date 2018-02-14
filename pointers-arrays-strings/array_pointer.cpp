#include<iostream>
using namespace std;

void fun(int *a,int n){
    cout<<"Size of a is "<<sizeof(a)<<endl;

    for(int i=0;i<n;i++){
        cout<< *(a+i)<<endl;
    }

}


int main(){
    int a[] = {1,2,3,4,5};
    fun(a,5);
    cout<< a<<endl;
    cout<< &a <<endl;

    int *ptr = a;
    cout<< ptr <<endl;
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(a)<<endl;

    int *ptr2 = &a[4];

    cout<<ptr2 - ptr <<endl;


return 0;
}
