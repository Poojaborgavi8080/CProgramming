#include<stdio.h>
int main()
{
    FILE *fp=NULL;
    char str[10];
    fp=fopen("demo.txt","a");
    if(fp==NULL)
    {
        printf("Error");
    }
    printf("Enter content which we want to append information : ");
    gets(str);
    //fputs(str,fp);
    fprintf(fp,"\n %s",str);
    printf("Successfully appended");
    fclose(fp);

}