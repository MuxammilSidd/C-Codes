// Write a C program to enter P, T & R and calculate Simple Interest.
#include<stdio.h>
int main()
{
    float principle, time, rate, SInterest;

    printf("Enter principle (amount): Rs.");
    scanf("%f", &principle);

    printf("Enter time: ");
    scanf("%f", &time);

    printf("Enter rate: ");
    scanf("%f", &rate);

    /* Formula for Simple Interest */
    SInterest = (principle * time * rate) / 100;

    printf("Simple Interest = Rs.%f", SInterest);

    return 0;
}