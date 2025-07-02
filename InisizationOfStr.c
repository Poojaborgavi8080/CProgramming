#include<stdio.h>
int main()
{
    // char name1[30]="Pooja";
    // printf("%s",name1);
    // printf("\n");

    char name[10];
    printf("Enter Name : ");

    //scanf("%s",name);
    gets(name);

    //printf("%s\n",name);
    puts(name);

    printf("%.5s\n",name);
    printf("%s\n",&name[2]); // start from 2nd index
}