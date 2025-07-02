/*
Author : Pooja Prakash Borgavi
Date : wednesday 18/06/2025 
Purpose : Create static variable
*/  
#include<stdio.h>
void display();

void display()
{
  static  int x;
  x=x+10;
  printf("\n%d",x);
}
int main()
{
  display();
  display();  
}