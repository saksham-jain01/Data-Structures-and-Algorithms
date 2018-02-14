#include<iostream>
using namespace std;

int countSteps(int n){
    if(n==1){
        return 1;
    }
    return countSteps(n-1)+1+countSteps(n-1);

}
void printSteps(int n,char source,char helper,char dest){
    if(n==0){
        return;
    }
    printSteps(n-1,source,dest,helper);
    cout<<"Moving disk "<<n<<"from "<<source<<" to "<<dest<<endl;
    printSteps(n-1,helper,source,dest);

}


int main(){

    //cout<<countSteps(5);
    int n;
    cin>>n;
    printSteps(n,'A','B','C');

return 0;
}
