//Write a C program to demonstrate the difference between ++x (pre-increment) 
//and x++ (post-increment) in an arithmetic expression. 

#include <stdio.h>

int main() {
    int a, b;

    // Example with pre-increment
    a = 7;
    b = 3 + ++a;  // Pre-increment: a is incremented before using in expression
    printf("After pre-increment:\n");
    printf("a = %d, b = %d\n", a, b);

    // Example with post-increment
    a = 7;
    b = 3 + a++;  // Post-increment: a is used first, then incremented
    printf("After post-increment:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}