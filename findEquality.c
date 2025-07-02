#include<stdio.h>
int main()
{
    int a[]={2,1,4,6,7};
    int b[]={2,1,4,6,7};

    int sizeOfA=sizeof(a)/sizeof(a[0]);
    int sizeOfB=sizeof(b)/sizeof(b[0]);

    if(sizeOfA==sizeOfB)
    {
        int cnt=0;
        for(int i=0;i<sizeOfA;i++)
        {
            if(a[i]==b[i])
            {
                cnt++;
            }
        }
        if(cnt==sizeOfA)
        {
            printf("Equal");
        }
        else
        {
            printf("Not Equal");
        }
    }
    else
    {
        printf("Not Equal");
    }
}