#include<iostream>
using namespace std;

int main(){
    // int i;
    // int a[3];
    //  a[0] = 4;
    // a[1]= 5;
    //  a[2] = a[0] + a[1];
    // cout<<"sum of "<<a[0]<<" and "<<a[1]<<" is "<<a[2]<<endl;
    int marks[4]= {23,34,34,223};
   
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    // while (i<4)
    // {
    //     cout<<"the value of<<i<<" <<marks[i]<<endl;
    // }
    
    for (int i = 0; i < 4; i++)
    {
cout<<"the value of marks "<<i<<" is " <<marks[i]<<endl;
    }
    
     return 0;
}