// Write a C program to enter a number and print it in words.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter Number: ");
    scanf("%d",&num); 
    int x, revNum = 0;
    // 123 = one two three

    // while loop to reverse a number
    while (num != 0)
    {
        revNum = revNum + (num % 10);
        revNum = revNum * 10;

        num = num / 10; 
    }
    revNum = revNum/10;
    // printf("%d", revNum);


    // While loop to print reversed number in words
    while (revNum != 0)
    {
        x = revNum % 10;
        switch (x) 
        {
            case 0:
            printf("Zero  ");
            break;

            case 1:
            printf("One  ");
            break;

            case 2:
            printf("Two  ");
            break;

            case 3:
            printf("Three  ");
            break;

            case 4:
            printf("Four  ");
            break;

            case 5:
            printf("Five  ");
            break;

            case 6:
            printf("Six  ");
            break;

            case 7:
            printf("Seven  ");
            break;

            case 8:
            printf("Eight  ");
            break;

            case 9:
            printf("Nine  ");
            break;

        }

        revNum = revNum / 10;
    }
    return 0;
}