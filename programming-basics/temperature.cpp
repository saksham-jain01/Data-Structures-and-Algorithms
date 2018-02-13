#include<iostream>
using namespace std;

void printTable(int init,int finalv,int step){

    int f,c;
    f = init;
    while(f<=finalv){
        c = 5*(f-32)/9;

        cout<< f <<"  " <<c <<endl;

        f = f + step;
    }
return;
}


int main(){
    int init,finalv,step;
    cin>>init>>finalv>>step;

    printTable(init,finalv,step);


return 0;
}
