#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;
int main(){
   
//     cout<<"\n multiplication table for 6 are";

// for(int i = 5 ;i<7;i++)
// {
// for(int j=1;j<=10;j++){
//     cout<<i<<"*"<<j<<"="<<i*j<<"\n";
// }
//    cout<<"\n======\n";
  
// }

// while loop
int n,i=1,limit;

cout<<"\n enter the number to print its table";
cin>>n;
cout<<"\n enter limit=";
cin>>limit;
 while(i<=limit)
 {
     cout<<n<<"*"<<i<<"="<<n*i<<endl;
     i++;
 }

   return 0;
}