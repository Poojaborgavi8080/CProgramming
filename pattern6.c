/*
*
**
***
****
*****
****
***
**
*
*/

#include<stdio.h>
int main()
{
    int end=1;
    for(int i=1;i<=9;i++)
    {
        for(int j=1;j<=end;j++)
        {
            printf("*");
        }
        printf("\n");
        if(i<5)
        {
            end++;
        }
        else
        {
          end--;
        }
    }
}
