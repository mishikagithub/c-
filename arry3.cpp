#include<iostream>
using namespace std;

int main(){
    int n,key;
    int i=0;
    printf("enter array size \n");
    scanf("%d", &n);
    printf("enter array element to find \n");
    scanf("%d", &key);
    int a[n];
    printf("enter the element array \n");
    for ( i = 0; i < n; i++)
    {
       printf("i \n");
       scanf("%d", a[i]);
    // }
    // if(a[i]==key)
    // {
    //   printf("%d \n");
       
    // }

if (i==n)
{
printf("element is not found");
}
else if (i!=n)
{
    printf("element present in index %d", i);
}

     return 0;
}