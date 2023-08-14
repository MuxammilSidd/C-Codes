#include<stdio.h>

int perc(int m);
int total(int s1, int s2, int s3, int s4);
// ---------------------------------------------------
int main()
{
    int marks = total(100,90,30,40);
    printf("Total marks: %d", marks);

    int per = perc(marks);
    printf("\nPercentage: %d", per);


    return 0;
}
// --------------------------------------------------

int total(int s1, int s2, int s3, int s4)
{
    return s1+s2+s3+s4;
}
// --------------------------------------------------
int perc(int mas)
{
    int ans = (mas * 100) / 400;

    return ans;
}
// --------------------------------------------------