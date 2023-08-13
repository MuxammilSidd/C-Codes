// Write a C program to make ‘Guess the Number’ game. (By For LOOP)
#include<stdio.h>
int main()
{
    int guess = 27;
    int input;
    int i;
    int attempt;

    printf("\n***Welcome to GUESS THE NUMBER GAME***\n");
    for(attempt = 5; attempt != -1; attempt--)
    {
        printf("\nEnter a number: ");
        scanf("%d",&input);

        if(attempt == 0)
        {
            printf("\n**Out of attempts!**");
            break;
        }

        if(input > guess)
        {
            printf("\n(Try a smaller number)");
        }
        else if(input < guess)
        {
            printf("\n(Try a greater number)");
        }
        else if(input == guess)
        {
            printf("\n***CORRECT***");
            break;
        } 
        printf("\nAttempts left: %d",attempt);

    }
    return 0;
}