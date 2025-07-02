#include<stdio.h>
int main()
{
    int a=10;
    int *ptr=NULL;
    printf("%d\n",ptr); // null pointer can not derefereced it

    // used for error handling
    int *ptr1=NULL;
    int *ptr2;
    if(ptr1==NULL)
    {
        printf("This is null pointer\n");
    }
    else
    {
        printf("%d\n ", *ptr1);
    }

    //compare
    if(ptr1==ptr2)
    {
        printf("null pointer are same");
    }
    else
    {
        printf("Not same ");
    }


}