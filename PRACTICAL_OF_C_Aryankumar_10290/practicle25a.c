#include <stdio.h>
int main() {
    int day;
    printf("Enter day (1-6): ");
    scanf("%d",&day);

    switch(day){
        case 1: printf("Monday: C Programming"); break;
        case 2: printf("Tuesday: Data Structures"); break;
        case 3: printf("Wednesday: Mathematics"); break;
        case 4: printf("Thursday: DBMS"); break;
        case 5: printf("Friday: Operating System"); break;
        case 6: printf("Saturday: Lab Session"); break;
        default: printf("Invalid Input");
    }
    return 0;
}