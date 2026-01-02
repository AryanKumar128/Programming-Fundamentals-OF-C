#include <stdio.h>

int main()
{
    int n, i;
    int sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];   // Array declaration

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];   // Add each element to sum
    }

    printf("Sum of the array elements = %d\n", sum);

    return 0;
}
