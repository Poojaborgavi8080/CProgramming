#include<stdio.h>
int main()
{
    int base=10;
    int power=2;
    int ans=1;
    for(int i=1;i<=power;i++)
    {
         ans=ans*base;
    }
    printf("%d",ans);
}