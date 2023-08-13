// Write a C program to enter marks of five subjects and calculate total, average and percentage.
#include<stdio.h>
int main()
{
    float math, eng, isl, phy, urdu;
    printf("Enter marks of the following subjects: \n");
    printf(" Maths: "); 
    scanf("%f",&math);

    printf(" English: "); 
    scanf("%f",&eng);

    printf(" Islamiat: ");
    scanf("%f",&isl);

    printf(" Physics: ");
    scanf("%f",&phy);

    printf(" Urdu: ");
    scanf("%f",&urdu);

    float total = (math + eng + isl + phy + urdu);
    float avg = total/5;
    float per = ((math + eng + isl + phy + urdu)/450)*100;
    printf("Total: %f",total);
    printf("\nAverage: %f",avg);
    printf("\nPercentage: %f ",per);
    
    return 0;
}