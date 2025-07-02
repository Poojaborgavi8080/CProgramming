#include<stdio.h>
struct student
{
    int a;
    int b;
    float c;
}; 
struct student s1={5,7,8.9};

int main()
{
printf("%d %d %f\n",s1.a,s1.b,s1.c);

// desingnated structure
struct student s={.b=10,.a=3,.c=8};
printf("%d %d %f",s.a,s.b,s.c);

}