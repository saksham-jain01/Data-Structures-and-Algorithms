#include<bits/stdc++.h>
using namespace std;
void printSoln(int  soln[][10],int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<soln[i][j]<<" ";
        }
        cout<<endl;
    }

}


bool solveMaze(char maze[][10],int i,int j,int m,int n,int soln[][10]){
    if(i==m-1&&j==n-1){
        soln[i][j]=1;
        printSoln(soln,m,n);
        return true;
    }
    soln[i][j] = 1;
    ///Move Right
    if(j+1<n && maze[i][j+1]!='X'){
            bool pathExists = solveMaze(maze,i,j+1,m,n,soln);
            if(pathExists){
                return true;
            }
    }
    if(i+1<m && maze[i+1][j]!='X'){
        bool pathExists = solveMaze(maze,i+1,j,m,n,soln);
        if(pathExists){
            return true;
        }
    }
    ///Backtracking
    soln[i][j] =0;
    return false;

}


 int main(){
 char maze[10][10] = {{".X.XX"},
                      {"....X"},
                      {"..X.."},
                      {"..X.X"},
                      {"....."},
                      {"X.X.."}
    };
   int soln[10][10] ={0};


    solveMaze(maze,0,0,6,5,soln);
 return 0;
 }
