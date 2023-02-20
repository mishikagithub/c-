#include<iostream>
using namespace std;

int main(){

    // pointer and array
    int marks[] = {43,32,53,76,65};
    int *p= marks;
cout<<"the value of [0] is"<<*p<<endl;
cout<<"the value of [0] is"<<*(p+1)<<endl;
cout<<"the value of [0] is"<<*(p+2)<<endl;
cout<<"the value of [0] is"<<*(p+3)<<endl;

// or

// cout<<*(p++)<<endl;
// cout<<*(++p)<<endl;
    return 0;
}