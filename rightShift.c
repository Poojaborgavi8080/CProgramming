#include<stdio.h>
int main()
{
    int a[]={2,4,6,8,9,0};
    int size=sizeof(a)/sizeof(a[0]);
    int temp= a[size-1];
    for(int i=size-1;i>0;i--)
    {
        a[i]=a[i-1];
    }
    a[0]=temp;
    for(int i=0;i<size;i++)
    {
        printf("%d",a[i]);
    }
}