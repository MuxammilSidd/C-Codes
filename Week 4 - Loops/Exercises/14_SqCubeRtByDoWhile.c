// C program to print square, cube and square root of all numbers from 1 to N.
#include<stdio.h>
#include <math.h>

int main()
{
    int num;
    int i=1;
    printf("Enter number: ");
    scanf("%d",&num);

    do
    {
        int sqr = pow(i, 2);
        int cube = pow(i, 3);
        float rot = sqrt(i);

        printf("\n%d : Square= %d, Cube = %d, Sq Root = %f", i, sqr, cube, rot);
        i++;
    }
    while(i<=num);
    return 0;
}