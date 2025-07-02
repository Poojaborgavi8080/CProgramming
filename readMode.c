/*
#include<stdio.h>
#include<stdio.h>
int main()
{
    FILE *fp=NULL;
    char ch;
    fp=fopen("abc.txt","r");
    if(fp==NULL)
    {
        printf("Error");
    }
    while(!feof(fp))
    {
    ch=fgetc(fp);
    printf("%c",ch);
    }
}*/

#include<stdio.h>
int main()
{
    FILE* fp=NULL;
    char str[10];
    fp=fopen("abc.txt","r");
    if(fp==NULL)
    {
        printf("Error");
    }
    while(!feof(fp))
    {
    fgets(str,9,fp);
    printf("%s",str);
    }
}