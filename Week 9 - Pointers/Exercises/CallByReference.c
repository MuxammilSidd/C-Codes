// Write a program in C to add numbers using call by reference
#include<stdio.h>

int suM(int *a, int *b, int *ans)
{
    *ans = *a + *b;
    // return ans;

}
int main()
{
    int q=10;
    int *x = &q;

    int w=5;
    int *y=&w;

    int anss = 0;
    int *res = &anss;
    
    suM(x, y, res);     // arguments given in pointer


    printf("Sum is: %d", anss);

    return 0;
}