#include<stdio.h>
#include <string.h>

int main()
{
    char str[10] = "Pakistan";
    char str2[10] = "india";

    // strlen() : To count length of String
    // printf("%d", strlen(str));
    
    // strcpy(target, source) : To copy string
    // strcpy(str2, str);
    // puts(str2);
    // printf("\n");
    // puts(str);

    // strcat(a,b) : For concatenation (a will also contain the elements of b; b will remain unaffected)
    char str3[10] = "China";
    char str4[10] = " America";
    strcat(str3, str4);
    puts(str3);
    puts(str4);
    return 0;
}