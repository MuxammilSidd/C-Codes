// Write a C program to find the average of first n natural numbers
#include<stdio.h>
int main()
{
    int n;
    int i = 1;
    float sum = 0;
    float avg = 0;

    printf("Enter number: ");
    scanf("%d",&n);

    while(i<=n)
    {
        sum = sum + i;          // sum += i
        avg = sum/n;                        // printf("%d\n",i);
        i++;
    }

        printf("Average is: %f",avg);
    return 0;
}