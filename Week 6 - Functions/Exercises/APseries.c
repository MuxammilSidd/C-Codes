// Write a c program to print AP series, having specific difference
#include<stdio.h>

// ap_series(4, 3)
// 0,3,6,9

int ap_series(int noOfTerm,int difference, int start)
{
    int ans = start;
    for(int i=1;i<=noOfTerm;i++)
    {
        printf("%d\t", ans);
        ans += difference;
    }

    printf("\n");
}



// ----------------------------------------------
int main()
{
    ap_series(5, 5, 100);
    ap_series(5,10,100);
    return 0;
}
