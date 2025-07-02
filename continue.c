// #include<stdio.h>
// int main()
// {
//     int i=1;
//     while(i<=10)
//     {
//          printf("%d",i);
//         if(i==5)
//         {
//         continue;
//         }
//         i++;
//     }
// }

#include<stdio.h>
int main()
{
    for(int i=0;i<=10;i++)
    {
        if(i==5)
        {
            continue;
        }
        printf("%d",i);

    }
}