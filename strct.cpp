#include<iostream>
using namespace std;
 struct student
 {
    char name[50];
    int roll;
    char branch;
 };
 
int main(){
    student s;

    // cout<<"enter information"<<endl;
    cout<<"enter student name";
    cin>>s.name;
    cout<<"enter student name"<<s.name<<endl;
    cout<<"enter student roll";
    cin>>s.roll;
    cout<<"enter student roll"<<s.roll<<endl;
    cout<<"enter student branch";
    cin>>s.branch;
    cout<<"enter student branch"<<s.branch<<endl;
    
    return 0;
}
