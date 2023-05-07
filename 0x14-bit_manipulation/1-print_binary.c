#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: number to convert
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int bite, binary = 0, i = 1;

	while (n)
	{
		bite = n & 1;
		n >>= 1;

		binary += bite * i;
		i *= 10;
	}

	printf("%d", binary);
}
