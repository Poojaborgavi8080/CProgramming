#include<stdio.h>
int main()
{
    int a=10,b=20;
    int *p,*q;
    p=&a;
    q=&b;
    q=p;
    *q=*p;
    printf(" %d %d %d",a,*p,*q);
}