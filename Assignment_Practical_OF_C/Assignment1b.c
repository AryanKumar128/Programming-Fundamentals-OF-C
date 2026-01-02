// Write a C program to input two integers and perform addition, subtraction, multiplication, 
// division, and modulus. Display the results

#include <stdio.h>

int main() {
    int a, b;

    printf("Enter first integer: ");
    scanf("%d", &a);

    printf("Enter second integer: ");
    scanf("%d", &b);

    printf("\nAddition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);

    if (b != 0) {
        printf("Division: %d\n", a / b);
        printf("Modulus: %d\n", a % b);
    } else {
        printf("Division and Modulus not possible (division by zero)\n");
    }

    return 0;
}
