#include<stdio.h>
#include<string.h>
int main()
{
    // char s1[]="Pooja";
    // strrev(s1);
    // printf("%s",s1);
     
    char str[]="borgavi";
    int l,i,j;
     char ch;
     l=strlen(str);

    //  for(i=0;i<=l/2;i++)
    //  {
    //     ch=str[i];
    //     str[i]=str[l-1-i];
    //     str[l-1-i]=ch;
    //  }
    //  printf("%s\n",str);

     for(i=0,j=l-1;i<j;i++,j--)
     {
        ch=str[i];
        str[i]=str[l-1-i];
        str[l-1-i]=ch;
     }
     printf("%s",str);
    
}