//A company wants to develop a simple login authentication system in C. 
// The system should check whether the entered username and password match the correct ones stored in the system. 

// Write a C program that: 

// Stores a predefined username and password (e.g., "admin" and "1234"). 

// Takes username and password as input from the user. 

// Uses logical operators (&&, ||, !) to check: 

// If both username and password are correct, display “Login Successful.” 

// If either username or password is incorrect, display “Invalid Login.” 





#include <stdio.h>
int main(){
    int username, password;

    
    int correctusername = 123456;
    int  correctpassword = 843327;

    //Input from user
    printf("Enter Username (Number): ");
    scanf("%d", &username);

    printf("Enter Password (number): ");
    scanf("%d", &password);

    
    if (username == correctusername && password == correctpassword){
        printf("Login Successful.\n");
    }
    else{
        printf("Invalid login.\n");
    }
    return 0;
}