#include<stdio.h>
int main()
{

    for (int i = 1; i <= 20; i+=1)
    {
        if (i % 2 == 0)
            printf("\n%d",i);
    }
    return 0;
}

// for (initializationStatement; testExpression; updateStatement)
// {
//     // statements inside the body of loop
// }