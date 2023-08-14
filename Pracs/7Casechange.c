#include<stdio.h>
char change_case(char ch)
{
    char x;
    if(ch >= 65 && ch <= 90)
    {
        x = ch + 32;
        printf("\n Lower Case is: %c ",x);
    }
    else if(ch >= 97 && ch <= 122)
    {
        x = ch - 32;
        printf("\n Upper Case is: %c",x);
    }
    else
    {
        printf("\nInvalid character.");
    }
}

int main()
{
    char a,b;
    printf("Enter a alphabet: ");
    scanf("%c",&a);
    b = change_case(a);

    return 0;
}
