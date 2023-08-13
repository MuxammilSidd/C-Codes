#include<stdio.h>
int main()
{
    int i = 1;

    while (i < 10) 
    {
        printf("\n%d", i);

        // continue;
        // printf("\nHello");

        if (i >= 5){
            // continue;
            printf("\nH");
            break;
        }

        i++;
        
    }

    printf("\nEnddddd");

    // iteration


    
    return 0;
}