//Function Type 1: Takes Nothing Return Nothing
#include<stdio.h>
#include<conio.h>
main()
{
   void add(void); // Function declaration
    add();// Function call
    
}
void add()// function Defination (parathesis is empty) ie, function does not take any argument and does no return value
{
    int x,y,result;
    printf("Enter First Number : ");
    scanf("%d",&x);
    printf("Enter Sencond Number : ");
    scanf("%d",&y);
    result=x+y;
    printf("Additin = %d",result);
}
