// Remove all characters in a string except alphabets
#include<stdio.h>
#include<string.h>
void removeChar(char * str, char charToRemmove){
    int i, j;
    int len = strlen(str);
    for(i=0; i<len; i++)
    {
        if(str[i] == charToRemmove)
        {
            for(j=i; j<len; j++)
            {
                str[j] = str[j+1];
            }
            len--;
            i--;
        }
    }
}
int main()
{
    char str[] = "1500 Fifteen Hundred";
    char str2[100];
    int j=0;
    int length = strlen(str);
    for(int i=0; i<=length; i++)
    {
        if(str[i]>=65 || str[i]<=90 || str[i]>=97 || str[i]<=122)
        {
                str2[j] = str[i];
                j++;
        }
        else if(str[i]>=48 || str[i]<=57)
        {
            removeChar(str, 0);
        }

    }

    printf("\n");
    puts(str2);
    return 0;
}