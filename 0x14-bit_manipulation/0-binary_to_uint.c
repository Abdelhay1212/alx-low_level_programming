#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: the binary number
 * Return: integer
 **/
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, len, num = 0;

	if (b == NULL)
		return (0);

	len = strlen(b);
	len--;
	while (b[i] != '\0')
	{
		if (isalpha(b[i]))
			return (0);
		if (b[i] == '1')
			num += pow(2, len);
		len--;
		i++;
	}
	return (num);
}
