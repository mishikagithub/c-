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

 complex(int a, int b=4); //constructor declaration
 void printnumber(){
    cout<<"your number is"<<a<<"+"<<b<<"i"<<endl;
 }
};
complex:: complex(int x,int y){
a=x;                                 //it is the parameter constructor it takes two parameter
b=y;  
            
}
int main(){
    // implicity call is commonly used to talk about two different concept in the language
    complex a(1);
    //explicity call
    complex b = complex(4,5);
    a.printnumber();
    b.printnumber();
    return 0;
}