#include<iostream>
using namespace std;
int sum(int a, int b){
    cout<<"using function with 2 argument"<<endl;
    return(a+b);
}
    int sum(int a, int b, int c){
    
        cout<<"using function with 3 argument"<<endl;
        return (a+b+c);
    }

    int main(){
        int a ,b,c;
        cout<<"sum of 4 and 5 is"<<sum(4,5)<<endl;
        cout<<"sum of 4 and 5,7 is"<<sum(4,5,7)<<endl;

return 0;
    }
