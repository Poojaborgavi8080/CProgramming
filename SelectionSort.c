#include<stdio.h>
int main()
{
    int a[]={2,5,3,2,6,7};
    int n=sizeof(a)/sizeof(a[0]);

    for(int i=0;i<n;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
           if(a[j]<a[min])
           {
            min=j;
           }
        }
        int temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }

    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}