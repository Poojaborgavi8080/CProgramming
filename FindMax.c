/*
Author : Pooja Prakash Borgavi
Date : Thursday 19/06/2025 
Purpose : Find maximum number HERE \ used for next line
*/     
#include <stdio.h>
#define MAX(a,b) if(a>b) \
                 printf("%d is maximum",a); \
                 else \
                 printf("%d is maximun",b);

int main()
{
 MAX(5,8);

 #undef MAX  // Undefine macros

 // MAX(5,8);
}                
