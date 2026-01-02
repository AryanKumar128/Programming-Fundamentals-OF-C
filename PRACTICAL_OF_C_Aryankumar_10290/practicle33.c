#include <stdio.h>

// Function to calculate factorial using call by reference
void factorial(int n, long long *fact)
{
    int i;
    *fact = 1;

    for (i = 1; i <= n; i++)
    {
        *fact = (*fact) * i;
    }
}

int main()
{
    int num;
    long long result;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Factorial of a negative number is not defined.");
    }
    else
    {
        factorial(num, &result);   // Call by reference
        printf("Factorial of %d is: %lld", num, result);
    }

    return 0;
}
