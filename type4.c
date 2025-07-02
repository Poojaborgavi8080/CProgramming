
//Function Type 4: Taken something return something
# include<stdio.h>
int add(int,int);
 main()
{
    int x,y,z;
printf("Enter First number : ");
scanf("%d",&x);
printf("Enter sencond number : ");
scanf("%d",&y);
z=add(x,y);
printf("Addtion is %d",z);
}
int add(int a,int b)
{
    return (a+b);
}