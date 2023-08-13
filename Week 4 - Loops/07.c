#include<stdio.h>
int main()
{
    int i = 1;
    int table = 3;

    do {
        printf("\n%d", i*table);
        i++;
    } 
    while (i <= 10);



    return 0;
}