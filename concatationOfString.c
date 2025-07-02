#include<stdio.h>
#include<string.h>
int main()
{
    int l1,l2,i;
    char s1[]="Pooja ";
    char s2[]="Borgavi ";

    // strcat(s2,s1);
    // puts(s2);

    strncat(s1,s2,2);
    puts(s1);
    
    l1=strlen(s1);
    l2=strlen(s2);
    for(i=0;i<=l2;i++)
    {
        s1[l1+i]=s2[i];
    }
    printf("String after concatation is %s",s1);
    

}