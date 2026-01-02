// Write a C program to accept an integer from the user and check whether
//  it is even or odd using an if-else statement. 


#include <stdio.h>
int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
       printf("%d is an even number \n", num); 
    }
    else {
        printf("%d is an odd number \n", num);
    }
    return 0;
}