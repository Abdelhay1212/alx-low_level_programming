#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all -  returns the sum of all its parameters.
 * @n: number of arguments passed to it
 * Return: integer
 **/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		unsigned int x;

		x = va_arg(args, int);
		sum += x;
	}
	va_end(args);

	return (sum);
}