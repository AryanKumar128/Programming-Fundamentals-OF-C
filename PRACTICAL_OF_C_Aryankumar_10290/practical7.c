// A bank’s internal tool needs to find out which of two account balances is higher, but the program cannot use any conditional statements (like if, else, or ternary operators). 

//Write a C program that: 

//Takes two account balances as input (float). 

//Uses relational and logical operators to determine: 

//Whether both balances are equal. 

//Whether the first balance is greater than the second. 

//Whether the second balance is greater than the first. 

//Displays the results as 1 (True) or 0 (False) for each condition. 



#include <stdio.h>
int main(){
    float balance1, balance2;

    printf("Enter first account balance1: ");
    scanf("%f", &balance1);

    printf("Enter second account balance2:");
    scanf("%f", &balance2);
    int is_Equal = (balance1 == balance2);
    int first_number_is_greater = (balance1 > balance2);
    int second_number_is_greater = (balance2 > balance1);


    printf("both balances are equal: %d\n", is_Equal);
    printf("first balance is greater: %d\n", first_number_is_greater);
    printf("second balance is greater: %d\n", second_number_is_greater);
 
    
    return 0;
}