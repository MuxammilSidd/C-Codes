//  Write a C program to print Fibonacci series up to n terms.
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233

#include<stdio.h>
int main()
{
    int n;
    int i;
    int t1 = 0;
    int t2 = 1;
    int nextTerm = t1 + t2;
    printf("ENter Number: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        if(i == 1)
        {
            printf("\n%d", t1);
            continue;
        }

        if (i == 2)
        {
            printf("\n%d", t2);
            continue;
        }

        printf("\n%d", nextTerm);
        // t1 = t2;        
        // t2 = nextTerm;
        // nextTerm = t1 + t2;

    }
    return 0;
}