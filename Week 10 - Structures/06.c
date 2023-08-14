#include<stdio.h>
#include<string.h>

struct student
{
    int age;
    float per;
    char grade;
};

int main()
{
    struct student st[3];

    for (int i=0; i<3; i++)
    {
        printf("\nEnter Student %d Age: ", i+1);
        scanf("%d", &st[i].age);

        printf("\nEnter Student %d Percentage: ", i+1);
        scanf("%f", &st[i].per);

        printf("\nEnter Student %d Grade: ", i+1);
        scanf(" %c", &st[i].grade);
    }

    for (int i=0; i<3; i++)
    {
        printf("\nStudent %d Age: %d", i+1, st[i].age);
        printf("\nStudent %d Percentage: %f", i+1, st[i].per);
        printf("\n Student %d Grade: %c", i+1, st[i].grade);
        printf("\n");
    }



    return 0;
}