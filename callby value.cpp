#include<iostream>
using namespace std;

    int swap(int a, int b){
int temp=a;
     a=b;
     b=temp;
    }


int main(){
    int a=2;
    int b=4;
    
    cout<<" the value of a is"<<a<<" and the value of b is"<<b<<endl;
    swap( a, b);
    cout<<" the value of b is"<<a<<" and the value of a is"<<b<<endl;

     return 0;
}
