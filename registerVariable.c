/*
Author : Pooja Prakash Borgavi
Date : wednesday 18/06/2025 
Purpose : Create register variable
*/  
#include<stdio.h>
//auto into x=10;  // not allowed program scope
int main()
{
    register int x=10;
    {
        register int x=40;
        printf("%d\n",x);
    }
    printf("%d",x);
    return 0;
}