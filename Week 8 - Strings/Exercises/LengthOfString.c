// Write a program in C to find the length of a string without using library function.
#include<stdio.h>
int main()
{
    char str[] = "muz0ammil";

    int a = sizeof(str);
    printf("%d",a-1);
    // printf("\n%d",str[8]);

    int count=0;
    for (int i=0; str[i]!=0; i++)
    {
        count++;
    }
    printf("%d",count);

    int a = 0;
    char b = '0'

    return 0;
}