// object memory allocation and using array in class
#include<iostream>
using namespace std;
class shop
{
    int itemid[100];
    int itemprice[100];
    int counter;
    
    public:
    void initcounter(void) {counter=0;}
    void setprice(void);
    void setdisplay(void);
};
void shop:: setprice(void){
    cout<<"enter id of your item no "<<counter+1<<endl;
    cin>>itemid[counter];
    cout<<"enter the price of item"<<endl;
    cin>>itemprice[counter];
    counter++;
}
void shop::setdisplay(void){
    for (int i = 0; i < counter; i++)
    {
cout<<"the price of item id"<<itemid[i]<<"is" <<itemprice[i]<<endl;
       
    }
    
}
int main(){
    shop A;
    A.initcounter();
A.setprice();
A.setdisplay();

return 0;
}