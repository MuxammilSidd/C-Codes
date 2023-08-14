#include<stdio.h>
int main()
{
    for (int i =1; i<=6; i++)
    {
        for(int j=1; j<=5; j++)
        {
            printf("B");
        }

        printf(" ");

        for(int k=1; k<=3; k++)
        {
            printf("Z");
        }

        printf("\n");

    }

    return 0;
}

// AAAAABBB
// AAAAABBB
// AAAAABBB

// for (3) A
// {
//     for (5) B
//     {

//     }

//     for (3) C
//     {

//     } 
// }
