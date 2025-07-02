
// pattern 7
/*
*
**
***
****
*****
*/

#include<stdio.h>
int main()
{
    int star=1;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<star;j++)
        {
            printf("*");
        }
        printf("\n");
        star++;
    }
}
   
