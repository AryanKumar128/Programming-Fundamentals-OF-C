/* Write a C program to find the maximum of two numbers using a function that accepts 
pointer arguments.*/


#include <stdio.h>

/* Function to find maximum using pointers */
int findMax(int *a, int *b) {
    if (*a > *b)
        return *a;
    else
        return *b;
}

int main() {
    int x, y, max;

    printf("Enter first number: ");
    scanf("%d", &x);

    printf("Enter second number: ");
    scanf("%d", &y);

    /* Passing addresses to the function */
    max = findMax(&x, &y);

    printf("\nMaximum of %d and %d is: %d\n", x, y, max);

    return 0;
}
