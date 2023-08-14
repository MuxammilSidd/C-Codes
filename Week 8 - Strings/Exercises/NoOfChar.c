// Find the number of vowels, consonants, digits and white spaces
#include<stdio.h>
#include<string.h>

int main()
{
    char str[] = " SimUltaneouslY 1500 ";
    int vowels = 0;
    int consonants = 0;
    int digits = 0;
    int whiteSpaces = 0;
    int length = strlen(str);
    
    puts(str);
    strlwr(str);

    for (int i=0; i<length; i++)
    {
        // str[i]
        if ((str[i] == 'a') || (str[i] == 'e') || (str[i] == 'i') || (str[i] == 'o') || (str[i] == 'u'))
        {
            vowels++;
        }
        else if (str[i] == ' ') 
        {
            whiteSpaces++;
        }
        else if ((str[i] >= 48) && (str[i] <= 57))
        {
            digits++;
        }
        else 
        {
            consonants++;
        }
    }
        
        printf("\nNumber of Vowels = %d",vowels);
        printf("\nNumber of Consonants = %d",consonants);
        printf("\nNumber of Digits = %d",digits);
        printf("\nNumber of WhiteSpaces = %d",whiteSpaces);
      
    return 0;
}