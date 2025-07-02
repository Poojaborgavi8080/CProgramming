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
    
    int space=4;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(j<=space)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
         space--;
        printf("\n");
       
    }
}