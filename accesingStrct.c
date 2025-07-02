#include<stdio.h>
struct student
    {
        int roll_no;
        float mark;
        char name[20];

    };
int main()
{
    struct student s3;
    printf("Enter value for s3 : \n");
    scanf("%d %f %s",&s3.roll_no,&s3.mark,s3.name);
    printf("%d %f %s",s3.roll_no,s3.mark,s3.name);

    struct student s={1,20.5,"pooja"};
    struct student s1;
    s1=s;
     printf("\nEnter value for s : ");
    printf("\n%d %f %s ",s.roll_no,s.mark,s.name);
     printf("\nEnter value for s1 : ");
    printf("\n%d %f %s ",s1.roll_no,s1.mark,s1.name);

}