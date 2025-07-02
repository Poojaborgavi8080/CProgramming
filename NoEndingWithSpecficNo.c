*#include<stdio.h>
int main()
{
    int x,y;
    int cnt=0;
    int endingNumber=6;
    printf("Enter the Range ");
    scanf("%d%d",&x,&y);
    for(int i=x;i<=y;i++)
    {
    if(i%10==endingNumber)
    {
        cnt++;
        printf("\n%d count=%d ",i,cnt);
    }}
    printf("\nThere are total number ending with ending Number %d = %d",endingNumber,cnt);
}