#include <stdio.h>
int main() {
    float item1, item2, item3, item4, item5, total;
    printf("Enter price of item 1: ");
    scanf("%f", &item1);

    printf("Enter price of item 2: ");
    scanf("%f", &item2);

    printf("Enter price of item 3: ");
    scanf("%f", &item3);

    printf("Enter price of item 4: ");
    scanf("%f", &item4);

    printf("Enter price of item 5: ");
    scanf("%f", &item5);

    total = item1 + item2 + item3 + item4 + item5;

    
    printf("\nTotal Bill Of all the items = %.2f\n", total);

    return 0;
}
