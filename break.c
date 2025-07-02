#include<stdio.h>
int main()
{
    int i,a,sum=0;
    for(i=1;i<=5;i++)
    {
        printf("Enter number : ");
        scanf("%d",&a);
        if(a<0)
        {
            break;
        }
        sum=sum+a;
    }
    printf("Sum is : %d",sum);
    return 0;
}