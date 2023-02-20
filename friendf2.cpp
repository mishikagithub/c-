#include<iostream>
using namespace std;
class y;
class x{
    int data;
    public:
    int setvalue( int value){
        data = value;
    }
     friend void add(x , y);
};
class y{
    int num;
    public:
    int setvalue( int value){
        num = value;
        
    }
    friend void add(x , y);
};
void add(x o1, y o2){
    cout<<"the sum of x and y object give me"<<o1.data + o2.num<<endl;
}
int main(){
    x a1;
    a1.setvalue(4);

    y b1;
    b1.setvalue(5);

   add(a1,b1);
    return 0;
}