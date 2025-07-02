#include<stdio.h>
#include<string.h>
int main()
{
    char s1[]="PoojA";
    // strlwr(s1);
    // puts(s1);
    int i;

    for(i=0;i<s1[i]!='\0';i++)
    {
        if(s1[i]>='A' && s1[i]<='Z')
        {
        s1[i]=s1[i]+32;
        }
        else if(s1[i]>'a' && s1[i]<='z')
        {
            s1[i]=s1[i]-32;
        }
        else
        {
            s1[i]=s1[i];
        }
    }
    puts(s1);

}