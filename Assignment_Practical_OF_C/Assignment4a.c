/* Write a C program that uses a user-defined function to swap two numbers using call by 
reference. The function should take the addresses of the variables as parameters and 
modify their values. */



#include <stdio.h>

/* User-defined function to swap values using call by reference */
void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    printf("Enter first number: ");
    scanf("%d", &x);

    printf("Enter second number: ");
    scanf("%d", &y);

    printf("\nBefore swapping:\n");
    printf("x = %d, y = %d\n", x, y);

    /* Function call with addresses */
    swap(&x, &y);

    printf("\nAfter swapping:\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}
