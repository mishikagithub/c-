#include<stdio.h>
// using namespace std;

int sum(int a, int b){
int c = a + b;
return c;
}
int main(){
    int num1,num2;
    
    printf("enter num1");
    scanf("%d" ,&num1);
   
    printf("enter num2"); //<<endl;
    scanf("%d", &num2); //cin>>num2;
   printf("the sum of %d and %d is = %d"); //"the sum is" <<sum(num1, num2)<<endl;
     return 0;
}