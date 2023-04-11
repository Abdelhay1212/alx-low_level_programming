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

	int cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	while (n != cents)
	{
		n += amounts[i];
		count++;

		if (n < cents)
			continue;
		else if (n > cents)
		{
			n -= amounts[i];
			count--;
			i++;
		}
	}
	printf("%d\n", count);
	return (0);
}
