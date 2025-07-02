#include<stdio.h>
int main()
{
    FILE *fp=NULL;
    char str[10];
    fp=fopen("demo.txt","r+");
    if(fp==NULL)
    {
        printf("Error");
    }
    fputs("pooja",fp);
    fputc('z',fp);
    fclose(fp);
}