#include <stdio.h>
int main() {
    float usage[7], total = 0;
    int i;

    printf("Enter electricity usage (in units) for 7 days:\n");

    for (i = 0; i < 7; i++) {
        printf("Enter units consumed on day %d: ", i + 1);
        scanf("%f", &usage[i]);
        total += usage[i]; 
    }

    printf("\nTotal weekly electricity usage = %.2f units\n", total);

    return 0;
}
