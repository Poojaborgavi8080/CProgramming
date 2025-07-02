
// #include<stdio.h>
// #include<stdlib.h>

// struct student {
//     int roll_no;
//     char name[10];
//     float mark;
// };

// int main() {
//     int i;
//     struct student *ptr;

//     // Dynamically allocate memory for 3 students
//     ptr = (struct student *)malloc(3 * sizeof(struct student));
//     if (ptr == NULL) {
//         printf("Memory not allocated.\n");
//         return 1;
//     }

//     // Input student data
//     for(i = 0; i < 3; i++) {
//         printf("Enter student %d details (roll_no name mark): ", i + 1);
//         scanf("%d %s %f", &ptr[i].roll_no, ptr[i].name, &ptr[i].mark);
//     }

//     // Output student data
//     for(i = 0; i < 3; i++) {
//         printf("Student %d: %d %s %.2f\n", i + 1, ptr[i].roll_no, ptr[i].name, ptr[i].mark);
//     }

//     // Free the memory
//     free(ptr);
    
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

// Define a structure
struct Student {
    int roll_no;
    char name[20];
    float marks;
};

int main() {
    // Allocate memory dynamically using malloc
    struct Student *s = (struct Student *)malloc(sizeof(struct Student));

    if (s == NULL) {
        printf("Memory not allocated.\n");
        return 1;
    }

    // Input values
    printf("Enter roll number: ");
    scanf("%d", &s->roll_no);

    printf("Enter name: ");
    scanf("%s", s->name);

    printf("Enter marks: ");
    scanf("%f", &s->marks);

    // Display values
    printf("\nStudent Details:\n");
    printf("Roll No: %d\n", s->roll_no);
    printf("Name   : %s\n", s->name);
    printf("Marks  : %.2f\n", s->marks);

    // Free the allocated memory
    free(s);

    return 0;
}
