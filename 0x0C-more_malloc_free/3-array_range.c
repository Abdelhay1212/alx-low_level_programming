#include <stdlib.h>

/**
 * array_range -  creates an array of integers.
 * @min: integer
 * @max: integer
 * Return: NULL or array of integers
 **/
int *array_range(int min, int max)
{
	int i, *arr;

	if (min > max)
		return (NULL);

	arr = (int *) malloc(sizeof(int) * (max - min));
	if (arr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		arr[i] = min;

	return (arr);
}
