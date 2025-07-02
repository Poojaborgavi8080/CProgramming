#include<stdio.h>
int main()
{
    int a[5];
    int sum=0;
    printf("Add 10 number");
    for(int i=1;i<=5;i++)
    {
    scanf("%d",&a[i]);
    }
    for(int i=1;i<=5;i++)
    {
     sum=sum+a[i];
    }
    printf("%d",sum);
}