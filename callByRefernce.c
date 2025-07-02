#include<stdio.h>
//function takes parameter by pointer
void func(int* val)
{
    // changing the value
    *val=123;
}
int main()
{
    int x=1;
    //passing address of x
    func(&x);
    printf("%d",x);
    return 0;
}
