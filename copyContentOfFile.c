#include<stdio.h>
int main()
{
    FILE *ptr1,*ptr2;
    char ch;
    ptr1=fopen("abc.txt","r");
    if(ptr1==NULL)
    {
        printf("Error");
    }
    ptr2=fopen("distination.txt","w");
    if(ptr2==NULL)
    {
        printf("Error");
    }

    while((ch=fgetc(ptr1))!=EOF)
    {
        fputc(ch,ptr2);
    }
   
    fclose(ptr1);
    fclose(ptr2);
 printf("Successfully copyed...");

}
