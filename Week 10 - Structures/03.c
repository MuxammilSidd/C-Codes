#include<stdio.h>

struct car {
    int cost;
    int mileage;
    char category;
    char numPlate[20];
};


int main()
{
    struct car civic = {5000000, 18, 'b'};
    struct car carolla = {};

    // civic.cost = 4000000;
    // civic.mileage = 18;
    // civic.category = 'b';

    printf("\nCost: %d", civic.cost);
    printf("\nMileage: %d", civic.mileage);
    printf("\nCategory: %c", civic.category);

    printf("\n\nCost: %d", carolla.cost);
    printf("\nMileage: %d", carolla.mileage);
    printf("\nCategory: %c", carolla.category);



    return 0;
}