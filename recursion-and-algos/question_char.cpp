#include<iostream>
using namespace std;

void intToStrings(char in[],int i,char output[],int j){
    if(in[i]=='\0'){
        output[j]='\0';
        cout<<output<<endl;
        return;
    }
    //First Case.
    int firstDigit = in[i]-'0';
    char ch = 'A'+firstDigit - 1;
    output[j] = ch;
    intToStrings(in,i+1,output,j+1);

    //Second Case.
    if(in[i+1]!='\0'){
        int secondDigit = in[i+1]-'0';
        int no = firstDigit*10 + secondDigit;
        if(no<=26){
            char ch = 'A' + no -1;
            output[j] = ch;
            intToStrings(in,i+2,output,j+1);
        }

    }

}


int main(){
    char in[] = "1234";
    char output[100];
    intToStrings(in,0,output,0);

    return 0;
}
