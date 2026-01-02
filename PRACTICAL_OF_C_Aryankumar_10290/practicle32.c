#include <stdio.h>

// Function to perform arithmetic operations using call by reference
void calculate(int a, int b, int *add, int *sub, int *mul, float *div)
{
    *add = a + b;
    *sub = a - b;
    *mul = a * b;

    if (b != 0)
        *div = (float)a / b;
    else
        *div = 0;
}

int main()
{
    int x, y, sum, diff, prod;
    float quotient;

    printf("Enter two numbers:\n");
    scanf("%d %d", &x, &y);

    // Call by reference
    calculate(x, y, &sum, &diff, &prod, &quotient);

    printf("\nAddition: %d", sum);
    printf("\nSubtraction: %d", diff);
    printf("\nMultiplication: %d", prod);

    if (y != 0)
        printf("\nDivision: %.2f", quotient);
    else
        printf("\nDivision not possible (division by zero)");

    return 0;
}
