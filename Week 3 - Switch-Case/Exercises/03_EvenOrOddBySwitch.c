//  Write a C program to check whether a number is even or odd using switch case.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d",&num);

    switch (num % 2)
    {
        case 0:
            printf("\nNumber is even");
            break;
        case 1:
            printf("\nNumber is odd");
            break;
        default:
            printf("invalid input");
    }

    return 0;
}