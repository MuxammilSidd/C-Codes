// Recursion => Recursive Functions
#include<stdio.h>
int printList(int a)
{
    printf("\n%d", a);

    if (a < 0)
    {
        return 0;
    }
    else
        return printList(a-1);  //printList(4)  printList(4) printList(2)   printList(0) printList(-1) 


}

#include<stdio.h>
int main()
{
    printList(5);
    return 0;
}