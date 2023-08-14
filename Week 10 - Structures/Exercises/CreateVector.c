// Create two dimensional vector using structures in C.

#include<stdio.h>
struct vector { double A[2] ; }; 

void main()
{
    int j,k;
    struct vector V1 = { 5.2, 6.1};               
    struct vector V2 = { 2.5, 3.7};               

    printf("The components of Vector1 are:");

    for ( j =0; j<2; j++)
    {
            printf("%.3f\t", V1.A[j]);  
    } 

            printf ("\n");
            printf ("\n");

    printf("The components of Vector2 are:");

    for ( k =0; k<2; k++)
    {
        printf("%.2f\t", V2.A[k]);
    }
        printf ("\n");
}

 