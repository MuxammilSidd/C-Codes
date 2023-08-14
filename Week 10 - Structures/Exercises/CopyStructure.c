// Copy the values of one structure to another.

#include<stdio.h>

typedef struct player
{
    char name[20];
    int goalScored;
    int assist;
    char rank;
} player;

int show(player p)
{
    printf("\nName: %s", p.name);
    printf("\nGoals Scored: %d", p.goalScored);
    printf("\nAssist: %d", p.assist);
    printf("\nRank: %c", p.rank); 
    printf("\n");   
}

int main()
{
    //Before Copying
    player n1 = {"1. Messi", 799, 347, 'A'};
    show(n1);
    player n2 = {"2. Ronaldo", 830, 267, 'A'};
    show(n2);

    //After Copying
    player temp;
    temp = n2;
    n2 = n1;
    show(n1);
    show(n2);

    // show(temp);
    return 0;
}