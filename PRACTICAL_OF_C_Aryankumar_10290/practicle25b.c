#include <stdio.h>

int main()
{
    int day;

    printf("Enter a number (1 to 6) to view the lecture schedule:\n");
    printf("1. Monday\n2. Tuesday\n3. Wednesday\n4. Thursday\n5. Friday\n6. Saturday\n");
    printf("Your choice: ");
    scanf("%d", &day);

    switch (day)
    {
        case 1:
            printf("Monday Schedule:\n");
            printf("Mathematics\nPhysics\n");
            break;

        case 2:
            printf("Tuesday Schedule:\n");
            printf("Chemistry\nProgramming in C\n");
            break;

        case 3:
            printf("Wednesday Schedule:\n");
            printf("Data Structures\nDigital Logic\n");
            break;

        case 4:
            printf("Thursday Schedule:\n");
            printf("Operating Systems\nDBMS\n");
            break;

        case 5:
            printf("Friday Schedule:\n");
            printf("Computer Networks\nSoftware Engineering\n");
            break;

        case 6:
            printf("Saturday Schedule:\n");
            printf("Project Work\nLab Session\n");
            break;

        default:
            printf("Invalid input! Please enter a number between 1 and 6.");
    }

    return 0;
}
