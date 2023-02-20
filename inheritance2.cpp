#include<iostream>
using namespace std;
class base{
    protected:
    int width ,height;
    public:
    int getdata(int w, int h){
        width=w;
        height=h;
    }
};
class derived:public base{
    public:
    int getarea(){
        return(width * height);
    }
};
int main(){
    derived d;
    d.getdata(10,20);
    cout<<d.getarea();
}