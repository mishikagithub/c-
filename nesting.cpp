#include<iostream>
#include<string>
using namespace std;


    class binary
    {
        string s;
        
        public:
        void read(void);
        void chk_bin(void);
        void one_compliment(void);
        void display(void);
    };
    void binary::read(void) {
        cout<<"enter binary number"<<endl;
        cin>>s;
    }
    void binary::chk_bin(void){
        for (int i = 0; i < s.length(); i++)
        {
            if (s.at(i)!='0' && s.at(i)!='1')
            {
               cout<<"incorrect binary number"<<endl;
               exit(0);
            }
            
        }
        
    }
    void binary::one_compliment(void){
       void chk_bin(void);
        for (int i = 0; i < s.length(); i++)
        {
            if (s.at(i) =='0')
            {
               s.at(i) ='1';
            }
            else
            {
                s.at(i)='0';
            }
            
        }
    }
    void binary::display(void){
        cout<<"display binary number"<<endl;
        for (int i = 0; i < s.length(); i++)
        {
            cout<<"s.at(i)";
        }
        cout<<endl;
 }
 int main(){
    binary b;
    b.read();
    b.chk_bin();
    
    b.one_compliment();
    b.display();

 }
    