#include<iostream>
using namespace std;
int demo(){
 static  int c=0;
     cout<<c<<endl;
     c++;
}
int main(){
    for (int i=0; i<5; i++){
        demo();
    }
}