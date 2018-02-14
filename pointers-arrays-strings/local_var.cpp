#include<iostream>
using namespace std;

int* makeArray(){

    int a[] = {1,2,3,4,5};
    for(int i=0;i<5;i++){
        cout<<a[i]<<endl;
    }
    cout<< a <<endl;
    return a;
}


int main(){
int *ans = makeArray();
cout<<ans<<endl;
for(int i=0;i<5;i++){
    cout<<*(ans+i)<<endl;
}

return 0;
}
