/* 
Displays the results as 1 (True) or 0 (False) for each condition. 
Problem Statement: Login Authentication System 
A company wants to develop a simple login authentication system in C. 
The system should check whether the entered username and password match the correct ones 
stored in the system. 
Write a C program that: 
Stores a predefined username and password (e.g., "admin" and "1234"). 
Takes username and password as input from the user. 
Uses logical operators (&&, ||, !) to check: 
If both username and password are correct, display “Login Successful.” 
If either username or password is incorrect, display “Invalid Login.” */


#include <stdio.h>
#include <string.h>

int main() {
    char username[20], password[20];

    /* Predefined credentials */
    char correctUser[] = "admin";
    char correctPass[] = "1234";

    printf("Enter Username: ");
    scanf("%s", username);

    printf("Enter Password: ");
    scanf("%s", password);

    /* Authentication using logical operators */
    if (strcmp(username, correctUser) == 0 && strcmp(password, correctPass) == 0) {
        printf("Login Successful.\n");
    } else {
        printf("Invalid Login.\n");
    }

    return 0;
}
