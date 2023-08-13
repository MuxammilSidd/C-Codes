#include<stdio.h>
int main()
{
    int password;
    int attempts = 5;

    printf("Enter password: ");
    scanf("%d",&password);

    while (password != 786)
    {
        printf("\nEnter correct password: ");
        scanf("%d",&password);
    }

    // printf("\nCorrect Password");

    return 0;
}