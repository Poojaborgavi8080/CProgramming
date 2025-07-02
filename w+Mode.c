#include<stdio.h>
int main()
{
    FILE* fp=NULL;
    char str[10];
    fp=fopen("abc.txt","r+");
    if(fp==NULL)
    {
       printf("Error");
    }
    fputs("Borgavi",fp);
    rewind(fp);//cursor points to first charactor
   
    while(!feof(fp))
    {
       fgets(str,5,fp);
       printf("%s",str);
    }
   
     
     fclose(fp);
   
}