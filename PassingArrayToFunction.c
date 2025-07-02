#include<stdio.h>
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }

}
int main()
{
int arr[5]={1,2,3,4,5};
int n=sizeof(arr)/sizeof(arr[0]);

print(arr,n);

}