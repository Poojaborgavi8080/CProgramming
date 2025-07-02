#include<stdio.h>
int main()
{
    char ch;
    int pos;
    char str[50];
    FILE *fp=NULL;
    fp=fopen("abc.txt","r");
    if(fp==NULL)
    {
        printf("Error");
    }
    pos=ftell(fp);
    printf("\n%d",pos);
    fseek(fp,5,SEEK_SET);
    printf("\n%d",ftell(fp));
    fseek(fp,0,SEEK_END);
    printf("\nLength of file is %d",ftell(fp));

}