#include<stdio.h>
void disply(int);
int main()
{
    int x=3;
    disply(x);
  

}
void disply(int a)
{
 if(a<1)
 {
 return;
 }
 else
{
    printf("%d",a);
    disply(a-1);
    printf("%d",a);

}
}