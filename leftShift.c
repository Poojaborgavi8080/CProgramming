#include<stdio.h>
int main()
{
    int a[]={1,4,6,7,9,1};
    int size=sizeof(a)/sizeof(a[0]);
    int temp=a[0];
    for(int i=0;i<size-1;i++)
    {
        a[i]=a[i+1];
    }
    a[size-1]=temp;
    for(int i=0;i<size;i++)
    {
        printf("%d",a[i]);
    }
}