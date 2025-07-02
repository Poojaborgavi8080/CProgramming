// #include<stdio.h>
// int main()
// {
//     int a[10]={10,20,30,40,50,60,70,80,91,101};
//     int evenCnt=0;
//     int oddCnt=0;
//     for(int i=0;i<a[i];i++)
//     {
//         if(a[i]%2==0)
//         {
            
//             printf("\n%d",a[i]);
//             evenCnt++;
//         }
        
//         else
//         {
//             printf("\n%d",a[i]);
//             oddCnt++;
//         }
        
//     }
//     printf("\nTotal Even Number is : %d",evenCnt);
//     printf("\nTotal Even Number is : %d",oddCnt);
// }

#include<stdio.h>
int main()
{
    int a[5];
    int even=0;
    int odd=0;
    int i;
    printf("Enter Number : \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<5;i++)
    {
        if(a[i]%2==0)
        {
            printf("\n Even No: %d",a[i]);
            even++;
        continue;


        }
        else
        {
            printf("\n Odd No: %d",a[i]);
            odd++;
        }
    }
    printf("\nEvent Count : %d",even);
    printf("\nOdd Count : %d",odd);
}