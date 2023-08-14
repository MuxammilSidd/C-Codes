#include<stdio.h>
int main()
{
    char sentence[20];
    printf("What's your name?  ");
    gets(sentence);  // like scanf

    printf("Your name is ");
    puts(sentence);     // like printf


    return 0;
}