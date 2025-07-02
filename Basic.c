#include<stdio.h>
int main()
{
    int a=10,b=40;
    int *p,*q;
    p=&a;
    q=&b; 
    *p=20; 
    printf("\nValue of a=%d",a); 
    printf("\na=%d",*p);
    printf("\nAddress of a = %x",&a);
    printf("\nAddress of a = %x",p);
    printf("\nAddress of a = %x",&p);

}