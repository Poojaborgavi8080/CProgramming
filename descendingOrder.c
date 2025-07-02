#include<stdio.h>
int main()
{
    int arr[]={2,3,4,1,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
}