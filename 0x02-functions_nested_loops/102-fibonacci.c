#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, 
	unsigned long sum, first = 1, second = 2;

	printf("%lu, %lu, ", first, second);

	for (i = 0; i < 50; i++)
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
