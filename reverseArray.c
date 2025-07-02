#include<stdio.h>
int main()
{
    int a[5];
    int i;
    printf("Enter 5 elements : \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Reverse Arrays :\n");
    for(i=4;i>=0;i--)
    {
        printf("Array at index %d is %d \n",i,a[i]);
    }
}