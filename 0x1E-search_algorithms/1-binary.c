#include "search_algos.h"

/**
 * binary_search - searches a value in a sorted array using the Binary search
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the first index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
    size_t middle;
    size_t left = 0;
    size_t right = size - 1;

    if (array == NULL)
        return (-1);

    while (left <= right)
    {
        size_t i;
        middle = (left + right) / 2;

        printf("Searching in array: ");
        for (i = left; i < right + 1; i++)
        {
            printf("%d", array[i]);
            if (i != right)
            {
                printf(", ");
            }
        }
        printf("\n");

        if (array[middle] == value)
            return (middle);
        else if (array[middle] < value)
        {
            left = middle + 1;
        }
        else
        {
            right = middle - 1;
        }
    }

    return (-1);
}