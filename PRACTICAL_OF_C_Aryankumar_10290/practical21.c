#include <stdio.h>

int main() {
    float distance, total = 0;

    printf("Enter walking distance (in km) for 30 days:\n");

    for (int i = 1; i <= 30; i++) {
        printf("Day %d: ", i);
        scanf("%f", &distance);
        total += distance; 
    }

    printf("\nTotal distance walked in the month = %.2f km\n", total);

    return 0;
}
