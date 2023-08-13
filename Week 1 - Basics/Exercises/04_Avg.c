// Write a C program that accepts two item’s weight (floating points' values) 
// and number of purchase (floating points' values) and calculate the 
// average value of the items
#include<stdio.h>
int main()
{
    float w1, w2;
    printf("Enter weight of first item: ");
    scanf("%f",&w1);
    printf("\nEnter weight of second item: ");
    scanf("%f",&w2);
    printf("\nThe average is: %f",(w1+w2)/2);
}
