#include<stdio.h>
#include<string.h>

int main()
{
    char str[12] = "Hello Worldx";
    char a[12] = "Pakistan";
    int length = strlen(str);
    puts(str);

    for (int i = 0; i < 11; i++)
    {
        a[i] = str[i];
    }
    printf("\n");

    puts(a);

    return 0;
}