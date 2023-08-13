// Write a C program to convert degrees Centigrade into degree Fahrenheit
#include<stdio.h>
int main()
{
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    //Celsius to Fahrenheit conversion formula
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("\n%.2f Celsius = %.2f Fahrenheit", celsius, fahrenheit);
    return 0;
}