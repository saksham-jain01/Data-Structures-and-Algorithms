#include<iostream>
using namespace std;

int main(){
    int alpha=0;
    int digits = 0;
    int spaces= 0;
    int others = 0;


    char ch;

    ch = cin.get();

    while(ch!='$'){


        if(ch>='0'&&ch<='9'){
            digits++;
        }
        else if(ch==' '||ch=='\n'){
            spaces++;
        }
        else if(ch>='a'&&ch<='z'){
            alpha++;
        }
        else{
            others++;
        }
        ch = cin.get();
    }

    cout<<"Alphabets "<<alpha<<endl;

    cout<<"Digits "<<digits<<endl;

    cout<<"Spaces "<<spaces<<endl;

    cout<<"Others "<<others<<endl;

return 0;
}
