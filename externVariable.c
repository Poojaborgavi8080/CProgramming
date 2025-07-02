#include<stdio.h>
void fun1();
void fun2();

int main()
{
    extern int x;
    x++;
    printf("%d\n",x);
    fun1();
    fun2();
}
void fun1()
{
    int x=30;
    printf("\nValue of x in fun1 is %d",x);
}
void fun2()
{
    printf("\nWithin function fun2");
}
int x=10;