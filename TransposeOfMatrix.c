#include<stdio.h>
int main()
{
    int a[2][3];
    int i,j;
    printf("Enter element of Matrix : \n");
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
    printf("Transpose of Matrix is : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");

    }
}

/*
#include<stdio.h>
int main()
{
    int i,j;
    int a[2][3];
    int b[3][2];
    printf("Enter element of Matrix : \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Transpose of Matrix is : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            b[i][j]=a[j][i];
              printf("%d ",b[i][j]);
        }
        printf("\n");
    }
}
*/
    

