#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	unsigned long first = 1, second = 2, sum;

	printf("%lu, %lu, ", first, second);

	for (i = 2; i < 50; i++)
	{
		sum = first + second;
		printf("%lu", sum);
		first = second;
		second = sum;

		if (i == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}

	return (0);
}
