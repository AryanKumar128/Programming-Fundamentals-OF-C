#include <stdio.h>
int main() {
    int color;
    printf("Enter a color number (1-Red, 2-Yellow, 3-Green): ");
    scanf("%d", &color);
    switch (color) {
        case 1:
            printf("Red - Stop\n");
            break;
        case 2:
            printf("Yellow - Ready\n");
            break;
        case 3:
            printf("Green - Go\n");
            break;
        default:
            printf("Invalid input! Please enter 1, 2, or 3.\n");
    }

    return 0;
}
