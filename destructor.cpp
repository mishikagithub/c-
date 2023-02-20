//class object as static
#include<iostream>
using namespace std;
//destructor never takes an argument nor does it return any value
class A{
    public:
A()
   {
    cout<<"default constructor"<<endl;;
   }
   ~A(){
    cout<<"destructor constructor"<<endl;;
   }  
};
int main(){
    int x=0;
    if(x==0){
        static A obj;
        {
            cout<<"end of program"<<endl;
        }
    }
}


class employee{
    public:
    int emp_name;
A()
   {
    cout<<"default constructor"<<endl;;
   }
   ~A(){
    cout<<"destructor constructor"<<endl;;
   }  
};
int main(){
    int x=0;
    if(x==0){
        static A obj;
        {
            cout<<"end of program"<<endl;
        }
    }
}