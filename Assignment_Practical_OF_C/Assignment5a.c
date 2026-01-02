/*Write a C program to read n elements into an array and calculate the sum and average of the elements.*/


#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int sum = 0;
    float average;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    average = (float)sum / n;

    printf("Sum of elements = %d\n", sum);
    printf("Average of elements = %.2f\n", average);

    return 0;
}
