
/*
Author : Pooja Prakash Borgavi
Date : Thursday 19/06/2025 
Purpose : Declare preprocessor function
*/
#include <stdio.h>
#define fun(a,b) a*b
int main()
{
 printf("%d\n",fun(3,7));
 printf("%d\n",fun(3+2,4+2));
 return 0;
}