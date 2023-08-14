#include<stdio.h>

int summ(int, int);
int dispayThreeChar(char a, char b, char c);
int main()
{
    // dispayThreeChar('c','a','t');
    
    int ans = summ(5,2);

    printf("\n%d", ans);
    return 0;
}
// ---------------



int dispayThreeChar(char a, char b, char c)
{
    printf("\n%c%c%c", a,b,c);
}

int summ(int num1, int num2)
{
    // printf("\n\nThe sum of %d and %d is %d",num1,num2,num1+num2);
    int x = num1 + num2;


    return x;
}