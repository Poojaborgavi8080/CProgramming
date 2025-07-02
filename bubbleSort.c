#include<stdio.h>
int main()
{
    int i,j,temp,flag;
    int a[]={1,3,5,6,7,1};
    int n=sizeof(a)/sizeof(a[0]);
    for(i=0;i<n-1;i++)
    {
     
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
        
    }
    for(int i=0;i<6;i++)
    {
        printf("%d ",a[i]);
    }
}