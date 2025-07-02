#include<stdio.h>
#include<string.h>
int main()
{
    char s1[10]="Pooja";
    char s2[10]="pooja";

    // int value=strcmp(s1,s2);
    // if(value==0)
    // {
    //     printf("Same");
    // }
    // else
    // {
    //     printf("Not same");
    // }

   
    if(strcmp(s1,s2)==0)
    {
        puts("same");
    }
    else
    {
        puts("Not same");
    }

printf("\n");
    //without using strcmp
     char str1[20];
     char str2[20];
    printf("Enter str1: ");
    gets(str1);
    printf("Enter str2: ");
    gets(str2);

    int flag=0;

    for(int i=0;i<str1[i]!='\0' || str2[i]!='\0';i++)
    {
        if(str1[i]!=str2[i])
        {
            flag=1;
            break;
        }
         
    }

    if(flag==0)
    {
      puts("Same");
    }
    else
    {
        puts("Not Same");
    }

}