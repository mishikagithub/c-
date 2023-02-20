#include<iostream>
using namespace std;

inline int product(int a, int b){
    return(a*b);
}


int main(){
    int a, b;
    cout<<"enter value of a"<<endl;
    cin>>a;
    cout<<"enter value of b"<<endl;
    cin>>b;
    cout<<"the product of a and b is"<<product(a,b)<<endl;
}