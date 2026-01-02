/*Problem Statement: Salary Calculation System 
A company wants to automate its employee salary calculation process using a C program. 
The program should take the following inputs from the user: 
● Employee name (string) 
● Basic salary (float) 
Using arithmetic operators, calculate and display the following:     
House Rent Allowance (HRA) = 20% of basic salary 
Dearness Allowance (DA) = 10% of basic salary 
Gross Salary = Basic Salary + HRA + DA 
Income Tax = 5% of Gross Salary 
Net Salary = Gross Salary - Income Tax 
Finally, display the employee name, basic salary, HRA, DA, Gross Salary, Income Tax, and Net 
Salary. */


#include <stdio.h>

int main() {
    char name[50];
    float basic, hra, da, gross, tax, net;

    printf("Enter Employee Name: ");
    scanf("%s", name);

    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    /* Salary calculations */
    hra = 0.20 * basic;          // 20% HRA
    da  = 0.10 * basic;          // 10% DA
    gross = basic + hra + da;    // Gross Salary
    tax = 0.05 * gross;          // 5% Income Tax
    net = gross - tax;           // Net Salary

    /* Display results */
    printf("\nSalary Details\n");
    printf("Employee Name   : %s\n", name);
    printf("Basic Salary    : %.2f\n", basic);
    printf("HRA (20%%)       : %.2f\n", hra);
    printf("DA (10%%)        : %.2f\n", da);
    printf("Gross Salary    : %.2f\n", gross);
    printf("Income Tax (5%%) : %.2f\n", tax);
    printf("Net Salary      : %.2f\n", net);

    return 0;
}
