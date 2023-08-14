#include<stdio.h>
float addition(float n1, float n2)
{
    float result;
    result = n1 + n2;
    return result;
}

int main()
{
    float a,b,ans;
    printf("Enter first number: ");
    scanf("%f",&a);
    printf("Enter second number: ");
    scanf("%f",&b);

    ans = addition(a,b);

    printf("%.2f + %.2f = %.2f",a,b,ans);

    return 0;

}