#include<iostream>
using namespace std;
class A{
    public:
     int x;
    A (){
      x=10;
        cout<<"value of x is"<<x<<endl;
    }
    A(A &obj){
        int x;
        x=obj.x;
        cout<<x<<endl;
    }

};
int main(){
    A a1;
    cout<<"after copy constructor"<<endl;
    A a2(a1);
   
   
}
   
  
  
  
  