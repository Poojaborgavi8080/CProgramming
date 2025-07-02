#include<stdio.h>
int main()
{
    
//     int a=2;
//     int b=4;
//     int temp =a;
//     a=b;
//     b=temp;
// printf(" value of a = %d",a);
// printf(" value of b = %d",b);

int x,y;
printf("Enter First number :");
scanf("%d",&x);
printf("Enter Seconf number : ");
scanf("%d",&y);
x=x+y;
y=x-y;
x=x-y;
printf("First Niumber =%d",x);
printf("Second Number =%d",y);
}