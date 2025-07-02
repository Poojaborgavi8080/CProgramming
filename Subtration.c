#include<stdio.h>
int main()
{int d;
    int a[]={0,1,-1,10,13};
    int *p=&a[0];
    int *q=&a[4];
   d=p-q;
    printf("%d\n",d);
    *q=25;
    d=q-p;
    printf("%d\n",d);
    *p=27;
    q=q-3;
    printf("%d\n",q);
    p=p+3;
    printf("%d\n",p);
    d=p-q;
    printf("%d\n",d);

    
}