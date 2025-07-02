#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    int i;
    char ch='a';
    char str[30];
    int a=10;
    fp=fopen("abc.txt","w");
    if(fp==NULL)
    {
        printf("Error");
        exit(1);
    }
    fputc(ch,fp);//write single character

    printf("\n%c %d",ch,a);
    
    printf("\nEnter name : ");
    gets(str);
    fputs(str,fp);//write string

    /*
    for(i=0;i<strlen(str);i++)
    {
        fputc(str[i],fp);
    }
    */
    
    fclose(fp);
}