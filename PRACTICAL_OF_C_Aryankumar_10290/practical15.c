#include <stdio.h>
int main() {
    int units;
    float rate, total, surcharge = 0;
    printf("Enter units consumed: ");
    scanf("%d", &units);

    if (units <= 100) {
        rate = 3;
    }
    else if (units <= 200) {
        rate = 4;
    }
    else {
        rate = 5;
    }

    total = units * rate;

    if (total > 1000) {
        surcharge = total * 0.10;   
        total += surcharge;
    }

    printf("\n--- Electricity Bill ---\n");
    printf("Units Consumed : %d\n", units);
    printf("Rate per Unit  : %.2f\n", rate);
    printf("Surcharge      : %.2f\n", surcharge);
    printf("Final Bill     : %.2f\n", total);

    return 0;
}
