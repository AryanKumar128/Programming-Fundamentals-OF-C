#include <stdio.h>

// User-defined function to swap two numbers using call by reference
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x, y;

    printf("Enter two numbers:\n");
    scanf("%d %d", &x, &y);

    printf("\nBefore swapping:\n");
    printf("x = %d, y = %d\n", x, y);

    // Call by reference
    swap(&x, &y);

    printf("\nAfter swapping:\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}
