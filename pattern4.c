/*
*****
****
***
**
*
*/

#include<stdio.h>
int main()
{
    int end=5;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<end;j++)
        {
            printf("*");
        }
        end--;
        printf("\n");
    }
}
