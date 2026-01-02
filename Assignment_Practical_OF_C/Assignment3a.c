/*Write a C program to print your name in the star pattern. */
#include <stdio.h>

int main() {
    int i, j;

    // Loop for each row of the letters
    for(i = 0; i < 5; i++) {
        // Letter A
        for(j = 0; j < 5; j++) {
            if((i == 0 && j == 2) || (i == 1 && (j == 1 || j == 3)) || (i == 2) || (i > 2 && (j == 0 || j == 4)))
                printf("*");
            else
                printf(" ");
        }
        printf("  "); // space between letters

        // Letter R
        for(j = 0; j < 5; j++) {
            if(j == 0 || (i == 0 && j < 4) || (i == 2 && j < 4) || (j == 4 && i == 1) || (i - j == 2))
                printf("*");
            else
                printf(" ");
        }
        printf("  "); // space between letters

        // Letter Y
        for(j = 0; j < 5; j++) {
            if((i < 3 && (i == j || i + j == 4)) || (i >= 3 && j == 2))
                printf("*");
            else
                printf(" ");
        }
        printf("  "); // space between letters

        // Letter A again
        for(j = 0; j < 5; j++) {
            if((i == 0 && j == 2) || (i == 1 && (j == 1 || j == 3)) || (i == 2) || (i > 2 && (j == 0 || j == 4)))
                printf("*");
            else
                printf(" ");
        }
        printf("  "); // space between letters

        // Letter N
        for(j = 0; j < 5; j++) {
            if(j == 0 || j == 4 || i == j)
                printf("*");
            else
                printf(" ");
        }

        printf("\n"); // next row
    }

    return 0;
}