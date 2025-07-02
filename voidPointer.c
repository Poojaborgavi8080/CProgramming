// if we use void pointer then we do not decalre pointer of differnt type of data type bcoz we can declare
// using void pointer by type casting
#include<stdio.h>
int main()
{
    int a=10;
    float b=0.6;
    char c='0';
    // int *ip=&a;
    // float *fp=&b;
    // char *cp=&c;
    void *vp;
    vp=&a;
    printf("%d ",*(int *)vp); // type cast the void into int type pointer
}