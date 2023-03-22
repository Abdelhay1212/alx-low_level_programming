#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from input to 98,
 *               in order separated by a comma followed by a space.
 * @n: The number to begin counting at.
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		if (i < 10)
		{
			putchar(i + '0');
		}
		else
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
		}

		if (i != 98)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
}
