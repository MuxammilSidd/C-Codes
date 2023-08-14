// calculate sum of the vectors using structures in C.

#include<stdio.h>
struct vector { double A[2] ; }; 
struct vector Addition( struct vector V1, struct vector V2)
{
    int i;
    struct vector sum;
    for( i =0; i<2; i++)
    {
     sum.A[i] = V1.A[i] + V2.A[i];
    }
    return sum; 
}

void main()
{
    int j,k;
    struct vector V3;
    struct vector V1 = { 5.0, 6.0}; 
    struct vector V2 = { 2.0, 2.0}; 

    V3 = Addition( V1, V2);

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
    printf ("\n");
    printf("The sum of Vector1 and Vector2 is:  ");

    for ( j =0; j<2; j++)
    {
            printf("%.3f\t", V3.A[j]);  
    } 

            printf ("\n");
            printf ("\n");
}