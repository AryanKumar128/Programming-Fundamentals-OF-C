//Write a C program to input two integers and perform addition, 
//subtraction, multiplication, division, and modulus. Display the results. 
#include <stdio.h>
int main() {
    int a, b;

    printf("Enter first integer: ");
    scanf("%d", &a);

    printf("Enter second integer: ");
    scanf("%d", &b);

    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    int quotient =  a / b;
    int remainder = a % b;  
    printf("\nResults:\n");
    printf("Addition: %d\n", sum);
    printf("Subtraction: %d\n", difference);
    printf("Multiplication: %d\n", product);
    printf("Division: %d\n", quotient);
    printf("Modulus: %d\n", remainder);

    return 0;
}