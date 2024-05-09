#include <stdio.h>
#include <stddef.h>

int binary_search(int *array, size_t size, int value)
{
    if (!array) /* Check for NULL array pointer */
        return -1;

    int left = 0;
    int right = size - 1;
    size_t i; /* Declare 'i' outside the loop */

    while (left <= right)
    {
        printf("Searching in array: ");
        for (i = left; i <= (size_t)right; i++) /* Cast 'right' to size_t for comparison */
        {
            printf("%d", array[i]);
            if (i < (size_t)right) /* Cast 'right' to size_t for comparison */
                printf(", ");
        }
        printf("\n");

        int mid = left + (right - left) / 2;

        if (array[mid] == value)
            return mid; /* Value found, return index */
        else if (array[mid] < value)
            left = mid + 1; /* Continue searching in the right half */
        else
            right = mid - 1; /* Continue searching in the left half */
    }

    return -1; /* Value not found */
}
