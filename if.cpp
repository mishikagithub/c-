#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter the age \n";
    cin>>age;
    // if(age>18) &&(age==18){
    //     cout<<"you can play this game\n";
    // }
    // else if(age<18){
    //     cout<<"you can not play this game\n";
    // }
    switch (age)
    {
    case 18:
   
   cout<<"you are 18";
        break;
        case 24:
   
   cout<<"you are 24";
        break;
        case 34:
   
   cout<<"you are 34";
        break;
    
    default:
    cout<<"no special case";
        break;
    }

    return 0;

}