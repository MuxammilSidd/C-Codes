// Write a program in C to separate the individual characters from a string
// For eg: google.com to g o o g l e . c o m

#include<stdio.h>
#include<string.h>
int main()
{
    char str[] = "Google.com";
    puts(str);

    for(int i=0; i <= strlen(str); i++)
    {
        printf("%c  ",str[i]);

    }

    return 0;
}
