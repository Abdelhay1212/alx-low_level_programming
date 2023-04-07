#include "main.h"

/**
 * check_prime - checks if number is prime
 * @n: integer
 * @i: integer
 * Return: integer
 */
int check_prime(int n, int i)
{
	if (n < i || n % i == 0)
		return (0);
	if (i > n / 2)
		return (1);

	return (check_prime(n, i + 1));
}

/**
 * is_prime_number - call the function check_prime
 * @n:integer
 * Return:integer
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check_prime(n, 2));
}
