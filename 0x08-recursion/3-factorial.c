#include "main.h"

/**
  * factorial - calculate the factorial of a given number.
  * @n: the given number.
  * return: returns -1 if n is negative.
  * returns integer otherwise.
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
