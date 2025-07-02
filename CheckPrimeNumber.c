#include<stdio.h>
int main()
{
    int x;
    int cnt=0;
    printf("Enter Number :");
    scanf("%d",&x);
    for(int i=1;i<=x;i++)
    {
        if(x%i==0)
        {
            cnt++;
        }
    }
    if(cnt==2)
    {
        printf("prime number");
    }
    else{
        printf("not prime number");
    }
}