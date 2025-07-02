#include<Stdio.h>
int main()
{
    
    FILE* fp=NULL;
    char ch;
    int n=1;
    fp=fopen("demo.txt","r");
    if(fp==NULL)
    {
        printf("Error");
    }
    while((ch=fgetc(fp))!=EOF)
    {
        if(ch=='\n')
        {
            n=n+1;
        }
    }
    fclose(fp);
    printf("Number of lines : %d",n);
}