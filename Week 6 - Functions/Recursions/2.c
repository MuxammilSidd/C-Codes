#include<stdio.h>

int sum(int n)
{
    if (n != 0)
        // sum() function calls itself
        return n + sum(n-1);        
    else
        return n;
        
}

// sum(3) = 3 + sum(2)
// sum(2) = 2 + sum(1)
// sum(1) = 1 + sum(0)
// sum(0) = 0

// 3 + sum(2)
// 3 + 2 + sum(1)
// 3 + 2 + 1 + sum(0)
// 3 + 2 + 1 + 0



int main()
{
    int a;
    a = sum(3);

    printf("%d", a);

    return 0;
}