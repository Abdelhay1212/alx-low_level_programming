#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: the binary number
 * Return: integer
 **/
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, num = 0;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		num <<= 1;
		if (b[i] == '1')
			num += 1;
	}

	return (num);
}
