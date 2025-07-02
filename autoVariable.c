/*
Author : Pooja Prakash Borgavi
Date : wednesday 18/06/2025 
Purpose : Create auto variable
*/  
#include<stdio.h>
//auto into x=10;  // not allowed program scope
int main()
{
    auto int x=10;
    {
        auto int x;
        printf("%d\n",x);
    }
    printf("%d",x);
    return 0;
}