// Write a C program to convert lowercase string to uppercase.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[] = "paKiStaN";
    int count=0;
    for(int i=0; i <= strlen(str); i++)
    {
        if ( str[i] <= 122 && str[i] >= 97)
        {
            str[i] = str[i]-32;
        }
    }
    puts(str);
    return 0;
}