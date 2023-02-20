#include<iostream>
using namespace std;
class complex{
int a, b;
public:
// creating constructor
/* 1.constructor is a special member function with the same name as of the class
2. it is used to initiallize the object of its class
3. it is automatically invoked whenever an object is created
*/

 complex(void); //constructor declaration.
 void printnumber(){
    cout<<"your number is"<<a<<"+"<<b<<"i"<<endl;
 }
};
complex:: complex(void){
a=10;                  //----->this is default constructor as it takes no. of parameter 
b=20;
}
int main(){
    complex c1,c2,c3;
    c1.printnumber();
    c2.printnumber();
    c3.printnumber();
    return 0;
}

// characteristics of constructors
/*
1. it should be declared in the public section of class
2.they are automatically invoked whenever the object is created
3.they can not return value and do not have return types
4.it can have default argument
5.we cannot reffer to their argument
*/



