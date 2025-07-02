#include<stdio.h>
int main()
{
    int a=0;
    printf("\n%d",a);
    
    for(int i=1;i<=20;i++)
    {
        int c=a+b;
        printf("\n%d",c);
        a=b;
        b=c;
    }
}