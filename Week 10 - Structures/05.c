#include<stdio.h>
#include<string.h>


struct student {
    char name[20];
    int age;
    float per;
};


int main()
{
    struct student st[10];
    st[0].age = 18;
    st[0].per = 60.52;

    strcpy(st[3].name, "Ali");
    st[3].age = 20;
    st[3].per =70.33;

 
    printf("%s",st[3].name);

    // struct student b;
    // b.age = 20;
    // printf("\nage of b: %d", b.age);


    return 0;
}