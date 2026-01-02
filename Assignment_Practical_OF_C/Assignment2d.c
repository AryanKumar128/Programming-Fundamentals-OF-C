/*Problem Statement: Bank Interest Update System 
A bank wants to develop a simple program to update a customer’s account balance using 
assignment operators. 
Write a C program that performs the following operations:  
Takes the customer’s initial account balance as input. 
Adds interest amount (using +=) to the balance. 
Deducts annual maintenance charge (using - =) from the balance. 
Multiplies the balance by a bonus factor (using *=) to reward loyal customers.    
Divides the balance equally among two linked accounts (using /=).     
Finally, displays the updated balance after each operation. */


#include <stdio.h>

int main() {
    float balance, interest, charge, bonus;

    printf("Enter initial account balance: ");
    scanf("%f", &balance);

    printf("Enter interest amount to add: ");
    scanf("%f", &interest);
    balance += interest;
    printf("Balance after adding interest: %.2f\n", balance);

    printf("Enter annual maintenance charge: ");
    scanf("%f", &charge);
    balance -= charge;
    printf("Balance after deducting charge: %.2f\n", balance);

    printf("Enter bonus factor: ");
    scanf("%f", &bonus);
    balance *= bonus;
    printf("Balance after applying bonus: %.2f\n", balance);

    balance /= 2;
    printf("Balance after dividing into two linked accounts: %.2f\n", balance);

    return 0;
}
