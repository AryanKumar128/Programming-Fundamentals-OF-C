// Write a C program to demonstrate the difference between ++x (pre-increment) and x++ 
// (post-increment) in an arithmetic expression.

#include <stdio.h>

int main() {
    int x, result;

    /* Pre-increment example */
    x = 5;
    result = ++x + 10;
    printf("Pre-increment (++x):\n");
    printf("Value of x = %d\n", x);
    printf("Result = %d\n\n", result);

    /* Post-increment example */
    x = 5;
    result = x++ + 10;
    printf("Post-increment (x++):\n");
    printf("Value of x = %d\n", x);
    printf("Result = %d\n", result);

    return 0;
}
