#include <stdio.h>

int main()
{
    int arr[5];
    int i;

    // Read 5 integers
    printf("Enter 5 integers:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Print the integers
    printf("\nThe elements of the array are:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
