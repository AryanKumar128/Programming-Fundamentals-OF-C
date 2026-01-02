// Write a C program to declare variables of type int, float, char, and double.
// Initialize them with values and print their values and sizes using sizeof operator. 
#include <stdio.h>
int main(){
    int a = 19;
    float b = 7.99;
    char c = 'M';
    double d = 7.9999999;

    printf(" Integer Value: %d\n", a);
    printf(" float Value: %2f\n", b);
    printf(" char Value: %c\n", c);
    printf(" double Value: %4lf\n", d);

    printf("\nsize of int: %d bytes\n", sizeof(a));
    printf("size of float: %d bytes\n", sizeof(b));
    printf("size of char: %d bytes\n", sizeof(c));
    printf("size of double: %d bytes\n", sizeof(d));

    return 0;
}