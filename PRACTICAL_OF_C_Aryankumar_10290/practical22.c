#include <stdio.h>

int main() {
    int attendance, totalPresent = 0;

    printf("Enter attendance for 30 days (1 = Present, 0 = Absent):\n");

    for (int i = 1; i <= 30; i++) {
        printf("Day %d: ", i);
        scanf("%d", &attendance);

        if (attendance == 1) {
            totalPresent++;
        }
    }

    printf("\nTotal Present Days = %d\n", totalPresent);

    return 0;
}
