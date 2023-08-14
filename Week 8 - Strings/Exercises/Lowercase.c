// Write a C program to convert uppercase string to lowercase.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[] = "PakIStan";
    // char ch = 'v';
    // ch = ch - 32;
    // printf("%c", ch);

    // + 32 for uppercase to lowercase
    // - 32 for lowercase to uppercase
    int count=0;
    for(int i=0; i <= strlen(str); i++)
    {
        if ( str[i] >= 65 && str[i] <= 90)
        {
            str[i] = str[i]+32;
        }
    }
    puts(str);
    return 0;
}
