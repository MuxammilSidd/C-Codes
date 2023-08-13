//  Write a C Program to find the Size of data types
 #include<stdio.h>
 int main()
 {
    int i;   
    int a = sizeof(i);
    char c;
    int b = sizeof(c);
    float f;
    int e = sizeof(f);
    double d;
    int g = sizeof(d);
    long l;
    int h = sizeof(l);
   
    printf("VALUES OF DATA TYPES: ");
    printf("\n Int: %d",a);
    printf("\n Char: %d",b);
    printf("\n Float: %d",e);
    printf("\n Double: %d",g);
    printf("\n Long: %d",h);
    return 0;
 }