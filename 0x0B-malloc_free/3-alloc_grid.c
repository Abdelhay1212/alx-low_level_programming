#include <stdlib.h>

/**
 * alloc_grid - pointer to a 2 dimensional array of integers.
 * @width: the width of the array
 * @height: the height of the array
 * Return: NULL or two dimentional array
 **/
int **alloc_grid(int width, int height)
{
	int i, j, **array;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = (int **) malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = (int *) malloc(sizeof(int) * width);

		if (array[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(array[i]);
			free(array);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}
	return (array);
}
