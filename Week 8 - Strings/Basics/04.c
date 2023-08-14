#include<stdio.h>
#include <string.h>


int main()
{
    char name[] = "Pakistan";
    char name2[] = "Portugal";

    // **strncat(dest, source, n)**
    strncat(name2, name, 5);
    puts(name);

    // ***strcmp(a,b) : To compare two strings***
    // char name3[] = "Hello";
    // char name4[] = "Hellz";

    // printf("%d", strcmp(name3, name4));

    // strrev ()
    // char name5[] = "Hello world";
    // strrev(name5);
    // puts(name5);

    // char name6[] = "PorTUgal";

    // strupr (name6);
    // puts(name6);

    // strlwr(name6);
    // puts(name6);

 

    return 0;
}