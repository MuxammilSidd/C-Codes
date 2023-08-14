#include<stdio.h>
#include<string.h>

struct car {
    int cost;
    int mileage;
    char category;
    char numPlate[20];
};

int main()
{
    struct car swift;
    // swift.numPlate = "BTN-2407";
    strcpy(swift.numPlate, "BTN-2407");

    printf("%s",swift.numPlate);
    return 0;
}