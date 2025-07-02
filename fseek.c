#include<stdio.h>
int main()
{
    FILE *fp=NULL;
    char ch;
    char str[20];
    fp=fopen("demo.txt","r");
    if(fp==NULL)
    {
        printf("Error");
    }
    fseek(fp,5,SEEK_SET);
    ch=fgetc(fp);
    printf("%c",ch);

    fseek(fp,-3,SEEK_CUR);
    ch=fgetc(fp);
    printf("%c",ch);

    fseek(fp,-3,SEEK_END);
    ch=fgetc(fp);
    printf("%c",ch);
    fclose(fp);
}