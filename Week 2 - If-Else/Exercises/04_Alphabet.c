// Write a C program to check whether a character is alphabet or not.
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);

    if (((ch <= 'z') && (ch >= 'a')) || ((ch <= 'Z') && (ch >='A')))
        printf("It is a alphabet");
    else
        printf("It is not a alphabet");

    return 0;
}