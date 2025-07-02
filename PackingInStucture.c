#include<stdio.h>
#pragma pack(1)

 struct Student
 {
    char a;
    int b;
 };
 int main()
 {
    struct Student data;
    printf("Size of Structure is :%d ",sizeof(data));
    return 0;
 }