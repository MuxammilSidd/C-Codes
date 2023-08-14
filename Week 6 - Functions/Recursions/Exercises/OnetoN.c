// Write a C program to print all natural numbers between 1 to n using recursion
#include<stdio.h>

void printNaturalNumbers(int lowerLimit, int upperLimit)
{
    if(lowerLimit > upperLimit)
    {
        return;
    }
    else if (lowerLimit == upperLimit)
    {
        printf("%d", lowerLimit);
    }
    else
    {
        printf("%d, ", lowerLimit);
    }
    // Recursively call the function to print next number
    printNaturalNumbers(lowerLimit + 1, upperLimit);
}

// printNaturalNumbers(0, 10)
// printNaturalNumbers(1, 10)
// .
// .
// printNaturalNumbers(10, 10)



int main()
{
    printNaturalNumbers(1, 10);
    return 0;
}
