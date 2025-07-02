#include<stdio.h>
int main()
{
int cnt=0;
int num=50;
while(num>0)
{

    cnt++;
    num=num/10;

}
printf("%d",cnt);
}