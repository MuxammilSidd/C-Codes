// Create two dimensional vector using structures in C.

#include<stdio.h>

typedef struct Vector
{
    int x;
    int y;
} Vector;

int add(Vector a, Vector b)
{
    Vector res;
    res.x = a.x + b.x;
    res.y = a.y + b.y;
    printf("Sum is %d   %d",res.x,res.y);
}
int main()
{
    Vector v1 = {4, 7};
    Vector v2 = {11,5};

    add(v1,v2);
    
    return 0;
}