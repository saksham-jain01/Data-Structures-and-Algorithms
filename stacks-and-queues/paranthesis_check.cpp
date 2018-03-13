#include<iostream>
#include<stack>
using namespace std;

bool isBalanced(char exp[]){

    stack<char> s;

    for(int i=0;exp[i]!='\0';i++){
        char ch = exp[i];
        switch(ch){
            case '(':
            case '[':
            case '{': s.push(ch); break;
            case ')': if(!s.empty() && s.top()=='('){
                                s.pop();
                      }
                      else{
                        return false;
                      }
                      break;
            case ']' : if(!s.empty() && s.top()=='['){
                        s.pop();
                        }
                        else{
                            return false;
                        }
                        break;
            case '}' : if(!s.empty()&& s.top()=='{'){
                        s.pop();
                        }
                        else{
                            return false;
                        }
                        break;
        }


    }
    if(!s.empty()){
        return false;
    }
    else{
        return true;
    }

}
int main(){
    char exp[] = "{a-b + [[c*d-f]} + (g+h)";
    if(isBalanced(exp)){
        cout<<"Its Balanced "<<endl;
    }
    else{
        cout<<"Not Balanced !"<<endl;
    }
return 0;
}
