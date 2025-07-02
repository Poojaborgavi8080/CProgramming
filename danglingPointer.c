#include<stdio.h>
#include<stdlib.h>

int * f()
{
    static int a=100;
    return &a;
}
int main()
{
    int *ptr1=f();
    printf("%d\n",*ptr1);



/*
    int *ptr=(int*)malloc(sizeof(int));
    *ptr=10;
    printf("%d\n",*ptr);
    free(ptr);
    *ptr=NULL;
    printf("%d\n",*ptr);
*/

}