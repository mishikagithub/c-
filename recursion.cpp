#include<iostream>
using namespace std;
// int factorial(int n){
//     if (n<=2){
//         return 2;
//     }
//     return n*factorial(n-1);
// }
// int main(){
//     int a;
//     int n;
//     cout<<"enter the number"<<endl;
//     cin>>a;
//     cout<<"the factorial of "<<a<<" is"<<factorial(a)<<endl;

// fabonacci sequeance (fabonacci sequences=1,1,2,3,5,8)
int fabonacci(int n){
    if (n<2){
        return 1;
    }
    return fabonacci(n-2) + fabonacci(n-1);
}
//     int factorial(int n){
//     if (n<=2){
//         return 2;
//     }
//     return n*factorial(n-1);
// }
int main(){
    int a;
    int n;
    cout<<"enter the number"<<endl;
    cin>>a;
    cout<<"the term in fabonacci sequence at position"<<a<<" is"<<fabonacci(a)<<endl;
 return 0;
}