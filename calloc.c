#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,*ptr;
    printf("Enter how many value we want to Enter :");
    scanf("%d",&n);
    
    ptr=(int *)calloc(n,sizeof(int));
    printf("Enter Number : \n");
    // for(i=0;i<n;i++)
    // {
    //     scanf("%d",(ptr+i));

    // }
    printf("Enter values are : ");
    for(i=0;i<n;i++)
    {
        printf("%d\n",(*(ptr+i)));
    }
    free(ptr);
}