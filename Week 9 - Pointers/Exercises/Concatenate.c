// Write a C program to concatenate two strings using pointers.

#include<stdio.h>
int main()

{  
    char string1[20];             // char array declaration  
    char string2[20];             // char array declaration  

    int i=0,j=0;                  // declaration of integer variables  

    char *str1;                   // declaration of char pointer  
    char *str2;                   // declaration of char pointer  

    str1=string1;  
    str2=string2;  

    printf("Enter the first string: \n");  
    scanf("%s",string1);  
    printf("\nEnter the second string: \n");  
    scanf("%s", string2);  

    while(string1[i]!='\0') 
    {  
        
        // ++str1;
        str1++; 
        i++;  
    } 

    while(string2[j]!='\0')  
    {  
        *str1=*str2;  
        str1++;  
        str2++;  
        j++;  
    } 
    
    printf("\n\nThe concatenated string is %s",string1);  

return 0;
}


