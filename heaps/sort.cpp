#include<iostream>
#include<algorithm>
using namespace std;

bool compare(int n1,int n2){
    return n1>n2;
}

int main(){
    int a[] = {1,2,5,4,3,6};

    sort(a,a+6,compare);

    for(int i=0;i<6;i++){
        cout<< a[i] <<endl;
    }

}
