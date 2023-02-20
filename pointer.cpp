#include<iostream>
using namespace std;

int main(){
    int a=4;

    int* b=&a;
    //&---->(address of)oprater
    cout<<"The address of a is"<<&a<<endl;
    cout<<"the address of b is"<<b<<endl;

    //*------>(value at)dereference oprater

    cout<<"the value of address b is"<<*b<<endl;;

    //pointer to pointer

    int**c=&b;
    cout<<"the address of b"<<&b<<endl;
     cout<<"the address of b"<<c<<endl;
      cout<<"the value  at address c"<<*c<<endl;
       cout<<"the value at address value_at(value at(c)) is"<<**c<<endl;
    
    return 0;
}