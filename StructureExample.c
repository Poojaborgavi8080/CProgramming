#include<stdio.h>
struct Student
{
    int roll_no;
    float marks;
    char name;
};
int main()
{
    struct Student data;
    data.roll_no=1;
    data.marks=1.8;
    data.name='A';
    printf("\nRoll Number : %d",data.roll_no);
    printf("\nMarks : %f",data.marks);
    printf("\nName : %c ",data.name);

}