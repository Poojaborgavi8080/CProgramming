#include<stdio.h>
int main()
{
    int a[2][3];
    int i,j,sr,sc;
    printf("Enter element of matrix : \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix is : \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
             printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<2;i++)
    {
        sr=sc=0;
        for(j=0;j<3;j++)
        {
          sr=sr+a[i][j];
          sc=sc+a[j][i];
        }
        printf("RowSum = %d , colSum = %d\n",sr,sc);
    }
}