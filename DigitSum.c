include<stdio.h>
int main()
{
    int num=12345;
    int sum=0;
    while(num>0)
    {
       
        int rem=num%10;
          sum=sum+rem;
         num=num/10;

    }
    printf("Sum = %d",sum);
}