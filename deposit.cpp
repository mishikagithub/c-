//code of bank deposit amount using constructor
#include<iostream>
using namespace std;
class bankdeposit{
    int principal;
    int interestrate;
    int year;
    int returnvalue;
   
public:
bankdeposit(){}
bankdeposit(int p,int r, int y);
bankdeposit(int p, float r, int y);
void showdata();
};
bankdeposit:: bankdeposit(int p, int r, int y){
    principal = p;
interestrate = r;
year = y;
returnvalue = principal;
for(int i = 0; i<y;i++){
    returnvalue = returnvalue * (1*r);
}
}
bankdeposit:: bankdeposit(int p, float R, int y){
    principal = p;
interestrate =float(R)/100;
year = y;
returnvalue = principal;
for(int i = 0; i<y;i++){
    returnvalue = returnvalue*(1*R);
}

};
void bankdeposit::showdata(){
    cout<<endl<<"principal amount was"<<principal<<endl<<"return value after"<<year<<"is "<<returnvalue<<endl;
}
int main(){
    bankdeposit bd1,bd2,bd3;
    int p , y;
    float r;
    int R;
    cout<<"enter the value of p,y,r"<<endl;
    cin>>p>>r>>y;

    bd1 = bankdeposit(p,r,y);
    bd1.showdata();
    
 cout<<"enter the value of p,y,R"<<endl;
    cin>>p>>R>>y;

    bd2 = bankdeposit(p,R,y);
    bd2.showdata();
    
    return 0;
}