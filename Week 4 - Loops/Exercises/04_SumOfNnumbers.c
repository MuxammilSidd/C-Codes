//  Write a C program to find the sum of first n natural numbers
#include<stdio.h>
int main()
{
    int n;
    int i = 1;
    int sum = 0;

    printf("Enter number: ");
    scanf("%d",&n);

    while(i<=n)
    {
        sum = sum + i;       // sum += i
        // printf("%d\n",i);
        i++;
    }

        printf("Sum is: %d",sum);
    return 0;
}