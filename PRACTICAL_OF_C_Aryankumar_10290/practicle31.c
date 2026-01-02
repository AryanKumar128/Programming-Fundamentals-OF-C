#include <stdio.h>

// Function to find maximum using pointers
int findMax(int *a, int *b)
{
    if (*a > *b)
        return *a;
    else
        return *b;
}

int main()
{
    int x, y, max;

    printf("Enter two numbers:\n");
    scanf("%d %d", &x, &y);

    // Pass addresses of variables
    max = findMax(&x, &y);

    printf("Maximum of %d and %d is: %d\n", x, y, max);

    return 0;
}
