#include<stdio.h>
int main()
{
    int i,j,temp;
    
    int size;
    printf("Enter size : \n");
    scanf("%d",&size);
    int arr[size];
    printf("Size of array : %d\n",size);
    printf("Enter the Array Element : \n");
    for(i=0;i<5;i++)
    {

        scanf("%d",&arr[i]);
    }

    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("Ascending Order Of Array : \n");
    for(i=0;i<size;i++)
    {
        printf("%d\n",arr[i]);
    }

}