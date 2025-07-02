

//Function Type 3: Takes nothing return Something
#include<stdio.h>
int add(void);
int main()
{
int s;
s= add();
printf("Addtion = %d",s);
}
int add() // function returns int value so we use int data type
{
    int x,y;
    printf("Enter first number :");
    scanf("%d",&x);
    printf("Enter sencond number : ");
    scanf("%d",&y);
    int res=x+y;
    return (x+y);
}