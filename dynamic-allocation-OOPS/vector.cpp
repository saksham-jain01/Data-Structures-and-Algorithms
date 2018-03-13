#include<iostream>
using namespace std;

class  Vector{
private:
    int max_size;
    int index;
    int *arr;
public:
    Vector(){
        max_size = 2;
        index = 0;
        arr = new int[max_size];
    }
    Vector(int init_size){
        max_size = init_size;
        index = 0;
        arr = new int[max_size];
    }
    Vector(Vector &X){
        index = 0;
        max_size = 2*X.size();
        arr = new int[max_size];
        for(int j=0;j<X.size();j++){
            arr[index] = X.arr[j];
            index++;
        }
    }
    void push_back(int data){
        /// Double the size if arr becomes full
        if(index==max_size){
            cout<<"Doubling array to size "<<2*max_size<<endl;
            int *newArr = new int[2*max_size];
            for(int i=0;i<max_size;i++){
                newArr[i] = arr[i];
            }
            delete [] arr;
            arr = newArr;
            max_size *= 2;
        }

        arr[index] = data;
        index++;
    }
    void pop_back(){
        if(index>0){
            index--;
        }
        ///Implement the Popping functionality
    }
    int getLast() const{
        return arr[index-1];
    }
    int at(const int i) const{
        return arr[i];
    }
    int size() const{
        return index;
    }
    int operator[](const int i) const{
        return arr[i];
    }
    void operator+(const Vector &v2){
        for(int j=0;j<v2.size();j++){
            push_back(v2[j]);
            /// v2[j] or v2.at(j) or v2.arr(j)
        }
    }
    void operator=(const Vector &v2){
        ///HOME WORK.

    }
    void print() const{
        for(int i=0;i<index;i++){
            cout<< arr[i]<<" ";
        }
        cout<<endl;
    }

};


int main(){

Vector v;

for(int i=0;i<=5;i++){
    v.push_back(i);
}
v.pop_back();
v.push_back(6);

Vector v1(v);
v1.push_back(7);
v.print();
v1.print();

for(int i=0;i<v1.size();i++){
    cout<<v1[i] <<endl;
}

v1+v;
v1.print();

return 0;
}
