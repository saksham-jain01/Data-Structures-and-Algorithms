#include<bits/stdc++.h>
using namespace std;

class Pair{
public:
    int x;
    int y;
    Pair(int x,int y){
        this->x = x;
        this->y = y;
    }

};
void operator <<(ostream&os,Pair p){
    os<<"("<<p.x<<","<<p.y<<")";
    return;
}
bool compare(const Pair &p1,const Pair &p2){
    if(p1.x<p2.x){
        return true;
    }
    else if(p1.x==p2.x){
        return p1.y<p2.y ? true:false;
    }
    return false;

}

int main(){

    Pair p1(1,2);
    Pair p2(2,1);
    Pair p3(1,1);

    vector<Pair> vp;
    vp.push_back(p1);
    vp.push_back(p2);
    vp.push_back(p3);

    sort(vp.begin(),vp.end(),compare);
    for(int i=0;i<vp.size();i++){
        cout<<vp[i];
    }

}
