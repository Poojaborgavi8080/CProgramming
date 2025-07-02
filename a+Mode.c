#include<stdio.h>
int main()
{
    FILE* fp=NULL;
    char ch;
    fp=fopen("abc.txt","a+");
    if(fp==NULL)
    {
        printf("Error");
    }
    fputs("\n mostoli",fp);
    rewind(fp);
    while(!feof(fp))
    {
        ch=fgetc(fp);
        printf("%c",ch);
    }
    
    fclose(fp);
}