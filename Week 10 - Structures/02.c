#include<stdio.h>

struct car {
    int cost;
    int mileage;
    char category;
    // char[] numPlate;
};


int main()
{
    struct car civic;
    civic.cost = 4000000;
    civic.mileage = 18;
    civic.category = 'b';

    printf("\nCost: %d", civic.cost);
    printf("\nMileage: %d", civic.mileage);


    return 0;
}