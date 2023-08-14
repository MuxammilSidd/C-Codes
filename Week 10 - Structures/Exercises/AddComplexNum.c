// C Program to Add Two Complex Numbers by passing Structure to a function
#include<stdio.h>
typedef struct complexnum
{
    float realnum;
    float imagnum;
} complexnum;

complexnum add(complexnum num1, complexnum num2)
{
    complexnum temp;
    temp.realnum = num1.realnum + num2.realnum;
    temp.imagnum = num1.imagnum + num2.imagnum;
    return temp;
}

int main()
{
    complexnum n1,n2, result;
    printf("For 1st complex number \n");
    printf("Enter the real and imaginary parts: ");
    scanf("%f %f", &n1.realnum, &n1.imagnum);
    printf("\nFor 2nd complex number \n");
    printf("Enter the real and imaginary parts: ");
    scanf("%f %f", &n2.realnum, &n2.imagnum);
    result = add(n1, n2);

    printf("Sum = %.1f + %.1fi", result.realnum, result.imagnum);
    return 0;
}