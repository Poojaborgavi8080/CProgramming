#include<stdio.h>
int main()
{
    int a=10,b=20;
    int *p;
    p=&a;
    
    int **q=&p;
    int ***r=&q;
    printf("%d %d %d %d",a,*p,**q,***r);

}