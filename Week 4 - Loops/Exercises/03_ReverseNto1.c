// Write a C program to print all natural numbers in reverse (from n to 1)
#include<stdio.h>
int main()
{
    int n;
    // int i = 1;

    printf("Enter number: ");
    scanf("%d",&n);

    while(n != 0)
    {
        printf("%d\n",n);
        n -= 1;
    }
    return 0;
}