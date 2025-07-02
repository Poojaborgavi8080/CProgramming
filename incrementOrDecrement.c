#include<stdio.h>
int main()
{
    int a[]={0,1,2,3,4,5};
    int *p;
    p=&a[2];
    // printf("%d\n",(*p)--);
    //  printf("%d\n",--(*p));
    //printf("%d %d %d",--*p,--*p,--*p);//right to left associtivity
    printf("%d %d %d",++*p,++*p);
    printf("\n%d",*p);
}