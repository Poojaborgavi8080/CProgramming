/*
#include<stdio.h>
#include<string.h>;
int main()
{
    char name[10];
    printf("Enter Name : ");
    gets(name);
     
    int count=strlen(name);
    printf("Length of String is : %d",count);
}

*/
#include<stdio.h>
#include<string.h>
int main()
{
    char name[10];
    printf("Enter name  : ");
    gets(name);
    int cnt=0;
    int i=0;
    while(name[i] !='\0')
    {
        cnt++;
        i++;
    }
    puts(name);
    printf("%d",cnt);
}