#include "main.h"

/**
 * print_diagsums - Prints the sum of the two diagonals
 *                  of a square matrix of integers.
 * @a: The matrix of integers.
 * @size: The size of the matrix.
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[i][i];
	}

	for (i = --i; i >= 0; i--)
	{
		 sum2 += a[i][i];
	}

	printf("%d, %d\n", sum1, sum2);
}
