#include <stdio.h>
#include <stdlib.h>

/**
 * main - the minimum number of coins to make change for an amount of money.
 * @argc: the number of arguments passed
 * @argv: stores the arguments
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int n = 0, i = 0, count = 0;
	int amounts[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (argv[1] < 0)
		printf("0\n");

	while (n != argv[0])
	{
		n += amounts[i];
		count++;

		if (n < argv[0])
			continue;
		else if (n > argv[0])
		{
			n -= argv[i];
			count--;
			i++;
		}
	}
	printf("%d\n", count);
	return (0);
}
