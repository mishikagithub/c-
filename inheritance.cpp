#include<iostream>
using namespace std;
class animal{
    public:
     void eat(){
     cout<<"I can eat"<<endl;
     }
     void sleep(){
        cout<<"i can sleep"<<endl;

     }

};
//derived class
class dog:public animal{
    public:
    void bark(){
        cout<<"i can bark!woof woof!"<<endl;
    }
};
int main(){
    dog dog1;
    dog1. eat();
    dog1. sleep();
    dog1.bark();
}