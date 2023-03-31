#include "main.h"

/**
 * reverse_array - reverse array
 * @a:array
 * @n:integer
 * Return:void
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		int temp;
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		n--;
	}
}
