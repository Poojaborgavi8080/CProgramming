#include<stdio.h>
#include<stdlib.h>
int main()
{
    int ch=1;
    int *ptr;
   
    while(ch<50)
    {   printf("Memory Leak Demo...");
        ptr=(int *)malloc(40000*sizeof(int));

        printf("Continue..??? Press 1");
        scanf("%d",&ch);
        free(ptr);
        
    }
    
}