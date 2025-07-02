#include<stdio.h>
int main()
{
    int a[]={9,5,7,8,9};
    int min=a[0];
    for(int i=1;i<5;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    
    printf("Minimun element is : %d",min);
}