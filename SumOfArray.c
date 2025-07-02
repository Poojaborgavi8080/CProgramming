#include<stdio.h>
int main()
{
    int arr1[5],arr2[5],sumArray[5];
    int i=0;
    printf("Enter first array element : \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr1[i]);
    }
     printf("Enter second array element : \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr2[i]);
    }
     printf("Sum is calculated is Third Array :\n ");
    for(i=0;i<5;i++)
    {
        sumArray[i]=arr1[i]+arr2[i];
        printf("\nSum at %d index is: %d",i,sumArray[i]);
    }
}