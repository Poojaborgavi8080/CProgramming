// #include<stdio.h>
// int main()
// {
//     int i,temp;
//     int a[]={1,3,4,2,4,4};
//     int size=sizeof(a)/sizeof(a[0]);
//     for(i=1;i<size-1;i++)
//     {
//         temp=a[i];
//         int j=i-1;
//         for(;j>=0;j--)
//         {
//             if(temp<a[j])
//             {
//                a[j+1]=a[j];
//             }
//             else
//             {
//                 break;
//             }
//         }
//         a[j+1]=temp;
//     }
//     for(int i=0;i<size;i++)
//     {
//         printf("%d ",a[i]);
//     }
// }

#include<stdio.h>
int main()
{
    int i,temp;
    int a[]={1,3,4,2,4,4};
    int size=sizeof(a)/sizeof(a[0]);
    for(i=1;i<size-1;i++)
    {
        temp=a[i];
        int j=i-1;
        while(j>0 && a[j]>temp)
        {
             a[j+1]=a[j];
             j--;
        }
        a[j+1]=temp;

    }
    for(int i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }

}