#include<iostream>
using namespace std;
class A{
    public:
     int x,y;
    A(){
        x=0;
        y=0;
        cout<<"default constructor"<<endl;
    }
    A (int a, int b){
        cout<<"parametrized constructor"<<endl;

        x=a;
        y=b;
    }
    int display(){
        cout<<"value of x="<<x<<endl;
        cout<<"value of y="<<y<<endl;
    }
};

int main(){
    A obj;
    obj.display();
    A obj1(10 ,20);
    obj1.display();
    A a1;
    cout<<"after copy constructor"<<endl;
    A a2(a1);
    cout<<"value of a3 is"<<endl;
    A a3 = a2;
}