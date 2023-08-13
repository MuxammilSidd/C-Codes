#include<stdio.h>
int main()
{
    int attempts = 5;
    int i;
    int sum = 0;

    // printf("Enter a number: ");
    // scanf("%d",&i);

    while(attempts != 0)
    { 
        printf("%d Attempts left.", attempts);
        printf("\nEnter a number: ");
        scanf("%d",&i); 
        sum += i;       
        --attempts;
    }
printf("%d",sum);
    return 0;
}