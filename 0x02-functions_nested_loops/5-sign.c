#include "main.h"

/*
*print_sign - Prints the sign of a number.
*
* @n: The number of which the sign will be printed.
*
* Return: 1 if n is greater than zero,
*	-1 if n is less than zero,
*	0 otherwise.
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar("+");
		return (1);
	}
	else if (n < 0)
	{
		putchar("-");
		return (-1);
	}
	else
	{
		putchar("0");
		return (0);
	}
}
