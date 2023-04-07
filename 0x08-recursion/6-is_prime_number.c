#include <math.h>
#include "main.h"

/**
  * is_prime - is a number is prime or not
  * @n: the number to check if it's prime
  * @i: integer
  * Return: returns 1 if it's prime, returns 0 otherwise
  */
int is_prime(int n, int i)
{
	if (n == 2)
		return (1);
	if (n % i == 0)
		return (0);
	if (i > sqrt(n))
		return (1);
	is_prime(n, i + 1);
}

/**
  * is_prime_number - returns 1 or 0
  * @n: integer
  * Return: returns 1 or 0
  */
int is_prime_number(int n)
{
	return (is_prime(n, 2));
}
