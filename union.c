#include<stdio.h>
union student
{
    int roll_no;
    char name;
    int marks;

};
int main()
{
union student data;
data.roll_no=1;
data.name='A';
data.marks=20;
printf("\nRoll Number : %d",data.roll_no);
printf("\nName : %c ",data.name);
printf("\nMarks : %d",data.marks);


}