#include<stdio.h>
int main()
{
    // int sub1=50,sub2=60,sub3=70,sub4=80,sub5=90;
    // printf("\n%d\t%d",sub1,sub2);

    int sub[10] = {50, 60, 70, 80, 90, 100, 10, 20, 30, 40};
        //index    0   1   2   3   4       

    sub[4] = 1000;
    printf("\n%d", sub[0]);
    printf("\n%d", sub[4]);
    printf("\n%d", sub[8]);
    printf("\n%d", sub[10]);        // Error

    // int sub[] = {50, 60, 70, 80, 90, 100, 10, 20, 30, 40};
    
    return 0;
}

// 5 subjects
// 5 Variables
