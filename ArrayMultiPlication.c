#include<stdio.h>
int main()
{
    int i,j;
    int sum=0;
    int c[3][3];
    int a[3][3]={
                 {1,2,3},
                 {1,2,3},
                 {1,2,3},
                };
    int b[3][3]={
                 {1,2,3},
                 {1,2,3},
                 {1,2,3},
                };
    
    printf("Sum of Matrix : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j]*b[i][j];
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}