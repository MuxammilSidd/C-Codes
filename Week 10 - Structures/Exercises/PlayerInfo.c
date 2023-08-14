// Store the information of player using structures
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
    player n1 = {"Messi", 799, 347, 'A'};
    show(n1);
    player n2 = {"Ronaldo", 830, 267, 'A'};
    show(n2);


    return 0;
}
