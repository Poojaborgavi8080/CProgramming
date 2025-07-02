
// Function Type 2: Takes somthing return Nothing

#include<stdio.h>
main()
{
    int x,y;
    printf("Enter First Number :");
    scanf("%d",&x);
    printf("Enter Second Number :");
    scanf("%d",&y);
     void add(int,int);//declaration
    add(x,y);//function calling (actual argument ) call by value
}

void add(int a,int b) // formal argument
{
    int result;
    result=a+b;
    printf("Addition is : %d",result);
}