#include<stdio.h>
struct student
{
    int roll_no;
    char name[20];
    float mark;
    
};
int main()
{
int i;
struct student s[3];

for(i=0;i<3;i++)
{
    printf("Enter student info: \n");
    scanf("%d%s%f",&s[i].roll_no,s[i].name,&s[i].mark);
}
printf("Info of Student : \n");
for(i=0;i<3;i++)
{
    printf("\n%d %s %f",s[i].roll_no,s[i].name,s[i].mark);
}
}