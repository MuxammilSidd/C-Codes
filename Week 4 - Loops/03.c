#include<stdio.h>
int main()
{
    int i = 0;
    // int counter = 0;
    int sum = 0;
    while (i < 5) 
    {
        sum = sum + i;
        printf("Enter a value less than 5: ");
        scanf("%d",&i);
        // counter++;
    }

    printf("End");
    printf("\nSum = %d", sum);

    return 0;
}