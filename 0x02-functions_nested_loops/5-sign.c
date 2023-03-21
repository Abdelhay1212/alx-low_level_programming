#include "main.h"

/*
* print_sign - prints + if n is greater than zero, prints - if less than zero
* prints 0 if n is zero
*
* @n: the number to be checked.
*
* Return: 1 if n is greater than zero, -1 if n is less than zero, 0 otherwise.
*/
int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");
		return (1);
	}
	else if (n < 0)
	{
		printf("-");
		return (-1);
	}
	else
	{
		printf("0");
		return (0);
	}
}
