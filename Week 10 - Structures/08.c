#include<stdio.h>
#include<string.h>

typedef struct student
{
    int age;
    float per;
    char grade;
} student;


int main()
{
    student n1;
    student *ptr;
    ptr = &n1;

    // (*ptr).age = 18;
    // printf("%d", n1.age);
    // printf("%d", (*ptr).age);

    ptr->per = 91.66666;
    // printf("\n%f", n1.per);
    printf("\n%f", ptr->per);


    return 0;
}