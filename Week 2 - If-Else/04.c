#include<stdio.h>
int main()
{
    int age;
    // char license 'A';

    printf("Enter your age: ");
    scanf("%d",&age);


    if (age >= 18)
    {
        printf("You can go the party");
    }
    else if (age%10 == 0)
    {
        printf("You can also go the party");
    }
    else
    {
        printf("You cannot go the party");
    }

    return 0;
}