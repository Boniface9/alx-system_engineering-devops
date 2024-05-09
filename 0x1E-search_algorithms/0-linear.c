#include "search_algos.h"
#include <stdio.h>
#include <stddef.h>
/**
 * linear_search - Searches for a value in an array of integers.
 * @array: Pointer to the first element of the array to search.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The first index where value is located, or -1 if not found.
 */
int linear_search(int *array, size_t size, int value)
{
    if (!array) /* Check for NULL array pointer */
        return -1;

    size_t i;
    for (i = 0; i < size; i++)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]); /* Print compared value */
        if (array[i] == value)
            return i; /* Return index if value found */
    }

    return -1; /* Value not found */
}
