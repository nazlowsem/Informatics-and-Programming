/* Task #1 (option 2) */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int x1, y1, x2, y2, chess;
    printf("Select Figure:\n\n 1 - King\n 2 - Queen\n 3 - Rook\n 4 - Elephant\n 5 - Horse\n\n> ");
    scanf("%d", &chess);
    printf("\nEnter X Coordinates First Chess Cage:\n\n> ");
    scanf("%d", &x1);
    printf("\nEnter Y Coordinates First Chess Cage:\n\n> ");
    scanf("%d", &y1);
    printf("\nEnter X Coordinates Second Chess Cage:\n\n> ");
    scanf("%d", &x2);
    printf("\nEnter Y Coordinates Second Chess Cage:\n\n> ");
    scanf("%d", &y2);
    
    if (chess == 1) {
        printf("\nKing Moves from Coordinates %d:%d in Coordinates %d:%d\n", x1, y1, x2, y2);
        if ((abs(x2 - x1) == 1 && abs(y2 - y1) <= 1) || (abs(y2 - y1) == 1 && abs(x2 - x1) <1)) {
            printf("It Is Possible To Do In One Move\n\n");
        }
        else {
            printf("It's Impossible Be Done in One Move\n\n");
        }
    }
    else if (chess == 2) {
        printf("\nQueen Moves from Coordinates %d:%d in Coordinates %d:%d\n", x1, y1, x2, y2);
        if ((x1 == x2 || y1 == y2)  || (abs(x2-x1) == abs(y2-y1))) {
            printf("It Is Possible To Do In One Move\n\n");
        }
        else {
            printf("It's Impossible Be Done in One Move\n\n");
        }
    }
    else if (chess == 3) {
        printf("\nRook Moves from Coordinates %d:%d in Coordinates %d:%d\n", x1, y1, x2, y2);
        if (x1 == x2 || y1 == y2) {
            printf("It Is Possible To Do In One Move\n\n");
     }
     else {
         printf("It's Impossible Be Done in One Moven\n");
     }
    }
    else if (chess == 4) {
        printf("\nElephant Moves from Coordinates %d:%d in Coordinates %d:%d\n", x1, y1, x2, y2);
        if (abs(x2 - x1) == abs(y2 - y1)) {
            printf("It Is Possible To Do In One Move\n\n");
        }
        else {
            printf("It's Impossible Be Done in One Move\n\n");
        }
    }
    else if (chess == 5) {
        printf("\nHorse Moves from Coordinates %d:%d in Coordinates %d:%d\n", x1, y1, x2, y2);
        if (((abs(x2 - x1) == 3) && (abs(y2 - y1) == 1)) || ((abs(y2 - y1) == 3) && (abs(x2 - x1) == 1))) {
            printf("It Is Possible To Do In One Move\n\n");
        }
        else {
            printf("It's Impossible Be Done in One Move\n\n");
        }
    }
    return 0;
}

/* Done */
