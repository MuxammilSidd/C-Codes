// Write a C program to enter two angles of a triangle and find the third angle.
#include<stdio.h>
int main()
{
    float angle1, angle2;
    printf("Enter first angle: ");
    scanf("%f",&angle1);
    printf("Enter second angle: ");
    scanf("%f",&angle2);

    float angle3;
    angle3=180-(angle1 + angle2);

    printf("The third angle is: %f",angle3);
    return 0;
}