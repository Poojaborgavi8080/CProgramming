#include<stdio.h>
int main()
{
    int a[]={1,9,6,7,8,9};
    int cnt=0;
    int ele=9;
    int i;
    int size=sizeof(a)/sizeof(a[0]);

    for( i=0;i<size;i++)
    {
        if(a[i]==ele)
        {
            cnt++;
            printf("\n%d",i);
        }
    }
    
    if(cnt==0)
    {
        printf("\nNot Found");
    }
    else
    {
        printf("\nFound");
    }
    
}