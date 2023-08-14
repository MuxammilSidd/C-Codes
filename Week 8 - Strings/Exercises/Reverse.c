//  Write a C program to find reverse of a string.
#include<stdio.h>
#include<string.h>

int main()
{
    char str[] = "Hello World";
    char str2[20];
    int length = strlen(str);
    // printf("%d", length);
    printf("\n");
    int j=0;
    for (int i = length-1; i != -1; i--)
    {
        printf("%c",str[i]);
        str2[j] = str[i];
        j++;
    }
    printf("\n");
    puts(str2);

    return 0;
}