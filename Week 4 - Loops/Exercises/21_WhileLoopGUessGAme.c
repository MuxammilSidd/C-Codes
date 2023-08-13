// Write a C program to make ‘Guess the Number’ game. (By WHile LOOP)
#include<stdio.h>
int main()
{
    int guess = 27;
    int input;
    int i;
    int attempt = 5;
    int attempts = 1;

    printf("\n***Welcome to GUESS THE NUMBER GAME***\n");

    while(attempt != -1)
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
            printf("\nYou have guessed in %d attempts!",attempts);
            break;
        } 
        printf("\nAttempts left: %d",attempt);

        attempt--;
        attempts++;
    }
    return 0;
}