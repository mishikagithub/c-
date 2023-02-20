#include<iostream>
using namespace std;
int main(){
    int i,n,fact=1;
    cout<<"enter numbert"<<endl;
    cin>>n;
    for(i=1; i<=n;i++){
    
        fact=fact*i; 
         }
          cout<<"the factorial of a numberis"<<fact<<endl;
        
    return 0;
}