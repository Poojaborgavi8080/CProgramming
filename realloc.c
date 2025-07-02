#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,*ptr;
    printf("Enter total no. of values : ");
    scanf("%d",&n);
    ptr=(int *)malloc(n*sizeof(int));
    printf("\nEnter values are : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
    printf("\n Enter Updated size of n : ");
    scanf("%d",&n);
    int *ptr1=(int*)realloc(ptr,n*sizeof(int));
    printf("\nprevious addres : %d, new address : %d",ptr,ptr1);
     printf("\nThe entered values are : \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(ptr1+i));
    }
    

}