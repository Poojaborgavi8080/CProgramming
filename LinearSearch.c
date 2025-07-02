#include<stdio.h>
int main()
{
    int a[]={1,4,6,8,4,9};
    int n=sizeof(a)/sizeof(a[0]);
    int cnt;
    int ele=8;
    for(int i=0;i<n;i++)
    {
       if(a[i]==ele)
       {
        cnt++;
        printf("Elment present at %d index ",i);
        break;
       }
    }
    if(cnt==0)
    {
        printf("Element is not present...!");
    }
}