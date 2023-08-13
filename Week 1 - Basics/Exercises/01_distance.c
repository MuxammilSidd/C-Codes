// Write a C program to find speed and acceleration

#include<stdio.h>
int main()
{
    float distance = 100;
    float time = 20;

    float speed = distance/time;
    float acc = speed/time;

    printf("The speed is: %fm/s",speed);

    printf("\nThe acceleration is: %f",acc);



}
