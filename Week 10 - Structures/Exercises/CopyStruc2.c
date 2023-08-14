// Copy the values of one structure to another.

#include<stdio.h>

typedef struct Class
{
    int students;
    int teachers;
} Class;

int main()
{
    Class nine = {46,10};
    printf("**Class Nine**");
    printf("\nStudent: %d", nine.students);
    printf("\nTeachers: %d", nine.teachers);    

    Class ten; 
    // ten.students = nine.students;
    // ten.teachers = nine.teachers;

    ten = nine;

    printf("\n\n**Class Ten**");
    printf("\nStudent: %d", ten.students);
    printf("\nTeachers: %d", ten.teachers);    

    printf("\n\n**Class Nine**");
    printf("\nStudent: %d", nine.students);
    printf("\nTeachers: %d", nine.teachers);    




}