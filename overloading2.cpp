#include<iostream>
using namespace std;
class complex{
    private:
    int a,b;
    public:
    void setdata(int x,int y){
        a = x;
        b = y;
    }
    complex operator +(complex c){
        complex t;
        t.a=a+c.a;
        t.b=b+c.b;
        return(t);
    }
    void showdata(){
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
    }
};
int main(){
    complex c1,c2,c3;
    c1.setdata(4,5);
    c2.setdata(6,7);
// operator overloading in c++
c3 = c1+c2;
c3.showdata();
    return 0;
}