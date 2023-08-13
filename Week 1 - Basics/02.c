#include <stdio.h>


int main()
{
    int num1;
    int num2;

    printf("Enter first Number: ");
    scanf("%d", &num1);

    printf("Enter second Number: ");
    scanf("%d", &num2);

    printf("The Product of %d & %d is %d", num1, num2, num1*num2);
    return 0;
}
