#include <stdio.h>

int main()
{
    int arr[100], n, pos, i;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to delete (1 to %d): ", n);
    scanf("%d", &pos);

    // Check for valid position
    if (pos < 1 || pos > n)
    {
        printf("Invalid position!");
    }
    else
    {
        // Shift elements to the left
        for (i = pos - 1; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }

        n--;  // Decrease array size

        printf("Array after deletion:\n");
        for (i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
