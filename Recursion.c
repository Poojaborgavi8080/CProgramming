#include<stdio.h>
main()
{

int res=sum(3);
printf("%d",res);
}
int sum(int a)
{
    int s;
    if(a==1)
        return a;
    s=a+sum(a-1);
    return (s);
}