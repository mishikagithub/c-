#include<iostream>
using namespace std;
class employee
{
    int id;
     int count;

    public:
     int id;
    static int count;

void setdata(void){
        // count is a static data member of class employee
        cout<<"enter the id o"<<endl;
        cin>>id;
        count++;
}
void getdata(void){
        cout<<"id of this employee is"<<id<<" and this is employee number"<<count<<endl;
}
// static function
static void getcount(void){
        cout<<"the value of count is"<<count<<endl;
}
    
};

int employee :: count=100;
int main(){
    employee rohan;
    rohan.setdata();
    rohan.getdata();
    employee :: getcount();
    }


