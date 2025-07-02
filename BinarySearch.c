#include<stdio.h>
int main()
{
    int a[]={3,6,2,6,8,7};
    int ele=4;
    int cnt=0;
    int n=sizeof(a)/sizeof(a[0]);
int start=0;
int end=n-1;
int mid=(start+end)/2;

while(start<=end)
{
if(a[mid]==ele)
{
     cnt++;
    printf("Element found : %d",ele);
    break;
   
}
if(ele>a[mid])
{
    start=a[mid+1];
}
else
{
    end=a[mid-1];
}
}
if(cnt==0)
{
    printf("Element is not found ");
}
}