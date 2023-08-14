#include<stdio.h>
#include<string.h>

// typedef

typedef struct student
{
    int age;
    float per;
    char grade;
} stu;

int main()
{
    stu st1 = {16, 70.0, 'A'};
    printf("%d", st1.age);
    return 0;
}