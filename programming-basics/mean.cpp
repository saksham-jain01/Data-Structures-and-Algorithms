#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n,num,largest=INT_MIN,smallest=INT_MAX;
    float sum=0;
    cin>>n;

    int i=1;
    while(i<=n){
        cin>>num;
        sum = sum + num;
        if(num>largest){
            largest=num;
        }
        else if(num<smallest){
            smallest = num;
        }
        i++;
    }
    cout<<"Mean is "<<sum/n<<endl;
    cout<<"Largest is "<<largest<<endl;
    cout<<"Smallest is "<<smallest<<endl;
return 0;
}
