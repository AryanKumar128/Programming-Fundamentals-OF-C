// A bank wants to develop a simple program to update a customer’s account balance using assignment operators. 

// Write a C program that performs the following operations: 

// Takes the customer’s initial account balance as input. 

// Adds interest amount (using +=) to the balance. 

// Deducts annual maintenance charge (using - =) from the balance. 

// Multiplies the balance by a bonus factor (using *=) to reward loyal customers. 

// Divides the balance equally among two linked accounts (using /=). 

// Finally, displays the updated balance after each operation. 

 


#include <stdio.h>
int main() {
    float balance, interest, maintenance, bonusFactor;
    printf("Enter initial account balance: ");
    scanf("%f", &balance);

    printf("Enter interest amount to add: ");
    scanf("%f", &interest);

    printf("Enter annual maintenance charge to deduct: ");
    scanf("%f", &maintenance);

    printf("Enter bonus factor : ");
    scanf("%f", &bonusFactor);

    balance += interest;
    printf("\nBalance after adding interest: %.2f\n", balance);

    balance -= maintenance;
    printf("Balance after deducting maintenance charge: %.2f\n", balance);

    balance *= bonusFactor;
    printf("Balance after applying bonus factor: %.2f\n", balance);

    balance /= 2;
    printf("Balance after splitting into two accounts: %.2f\n", balance);

    return 0;
}
