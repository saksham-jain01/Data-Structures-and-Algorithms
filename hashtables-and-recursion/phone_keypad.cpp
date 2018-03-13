#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

string keypad[] = {".@#","abc","def","ghi"};
vector<string> v;

void printKeypad(char *input,int i,char *output,int j){
    if(input[i]=='\0'){
        output[j]='\0';
        string s(output);
        v.push_back(s);
        //cout<<output<<endl;
        return;
    }

    int current_digit = input[i] - '0';
    int len = keypad[current_digit].length();

    for(int k=0;k<len;k++){
            output[j] = keypad[current_digit][k];
            printKeypad(input,i+1,output,j+1);
    }
}


int main(){

char input[100],output[100];
cin>>input;
printKeypad(input,0,output,0);
for(int i=0;i<v.size();i++){
    cout<< v[i]<<" ";
}
return 0;
}
