// Write a C program which asks user for username and password, having five attempts
#include<stdio.h>
int main()
{
    char usernameM = 'u';
    int passwordM = 1234;
    int attempt = 5;

    char username;
    int password;

    printf("\n**Welcome to the App**");
    while (attempt != 0)
    {
        printf("\nEnter Username: (single character) ");
        scanf(" %c",&username);

        printf("Enter Password: ");
        scanf("%d",&password);

        if(username != usernameM && password != passwordM)
        {
            printf("\nIncorrect Username & Password.\n");
            attempt--;        
        }
        else if(username != usernameM)
        {
            printf("\nIncorrect Username.\n");
            attempt--;               
        }
        else if(password != passwordM)
        {
            printf("\nIncorrect Password.\n");
            attempt--;               
        }
        else
        {
            // printf("\n**Access Granted.**\n");
            break;
        }
        printf("\t\t\tATTEMPTS LEFT: %d",attempt);
    }
// --------------------------------------
    if (attempt == 0)
    {
        printf("\n\t\t\tNo attempts left.");
    }
    else
    {
        printf("\n**Access Granted.**\n");        
    }


    return 0;
}