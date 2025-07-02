#include<stdio.h>
int main()
{
    int a[5];
    int i;
    int sum=0;
    float avg;
    printf("Enter five marks : \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<5;i++)
    {
       sum=sum+a[i];
    }
    printf("Sum is :%d\n",sum);

    avg=sum/5.0;
    printf("Average is : %f",avg);

}