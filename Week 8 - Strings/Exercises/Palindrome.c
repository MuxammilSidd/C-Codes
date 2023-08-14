// Write a C program to check whether a string is palindrome or not.
// palindrome 
    // level
    // racecar


#include<stdio.h>
#include<string.h>

int main()
{
    char str[] = "madam";
    int a = strlen(str) - 1;
    int flag = 1;
    
    int halfLength = strlen(str)/2;

    for (int i=0; i<halfLength; i++)
    {
        if (str[i] != str[a])
        {
            printf("It is not a palindrome");
            flag = 0;
            break;
        }
        a--;
    }

    if (flag == 1)
        printf("It is a palindrome");

    return 0;
}