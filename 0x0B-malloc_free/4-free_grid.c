#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional array
 * @grid: the array to free
 * @height: height of the grid
 * Return: void
 **/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
