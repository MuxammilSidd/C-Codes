// Object Oriented Programming (OOP)


#include<stdio.h>

struct student {

    int age;
    float per;
};


int main()
{
    struct student a;
    a.age = 10;
    a.per = 54.11;
    printf("age of a: %d", a.age);

    struct student b;
    b.age = 20;
    printf("\nage of b: %d", b.age);

 

    return 0;
}