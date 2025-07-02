#include<stdio.h>
int main()
{
    int a=10;
    int b=20;
    int c=3;
    if(a>b && a>c)
    {
        printf("Maximum number is : %d",a);
    
    }
     else if(b>a && b>c)
    {
        printf("Maximum Number is : %d",b);
    }
    else{

        printf("Maximum Number is : %d",c);
    }
}