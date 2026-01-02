#include <stdio.h>

int main()
{
    int arr[100], n, key, i;
    int found = 0;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to search: ");
    scanf("%d", &key);

    // Linear Search
    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            printf("Element %d found at position %d\n", key, i + 1);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Element %d not found in the array\n", key);
    }

    return 0;
}
