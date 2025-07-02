#include<stdio.h>
struct student
{
    int roll_no;
    char name[20];
    float mark;
};
int main()
{   struct student s1;
    printf("enter info : \n");
    scanf("%d%s%f",&s1.roll_no,s1.name,&s1.mark);
    struct student *ptr1=&s1;

     printf("%d %s %f",(*ptr1).roll_no,(*ptr1).name,(*ptr1).mark);

    // struct student s={1,"pooja",6.9};
    // struct student *ptr=&s;
    // printf("%d %s %f\n",ptr->roll_no,ptr->name,ptr->mark);
   

}