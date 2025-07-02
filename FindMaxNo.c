#include<stdio.h>
int main()
{
    int a[5]={9,3,4,5,2};
    int max=a[0];
    for(int i=0;i<5;i++)
    {
        if(a[i]>max)
        {
             max=a[i+1];
        }
       
    }
    printf("Max is %d",max);
}