#include<stdio.h>
int main()
{
    int a[]={2,4,6,8,2};
    int ucnt=0;
    for(int i=0;i<5;i++)
    {
        int cnt=0;
        for(int j=0;j<i;j++)
        {
            if(a[i]==a[j])
            {
                cnt++;
            }
        }
        if(cnt==0)
        {
            ucnt++;
        }
    }
    printf("UniqueCount is : %d",ucnt);
}