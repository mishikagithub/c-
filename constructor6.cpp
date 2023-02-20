//code of default, parameter, copy constructor in one program.

#include<iostream>
using namespace std;
class A{
    int x,y;
    public:
    A(){
    cout<<"default constructor"<<endl;
    x=0;
    y=0;
    }
    A (int a, int b){
        cout<<"parameter constructor"<<endl;
        x=a;
        y=b;
    }
    A(A &obj){
        x=obj.x;
        y=obj.y;
    }
    int showdata(){
        cout<<"value of x is"<<x<<endl;
        cout<<"value of y is"<<y<<endl;
    }
   };
   int main(){
        A obj1;
        cout<<"default constructor"<<endl;
        obj1.showdata();

        A obj2(10,20);
        cout<<"parameter constructor"<<endl;
        obj2.showdata();

        A obj3(obj1);
        cout<<"copy constructor of obj3"<<endl;
        obj3.showdata();

        A obj4 = obj2;
        cout<<"after copy constructor of obj4"<<endl;
        obj4.showdata();
   }