#include "main.h"

/**
  * check_prime - is a number is prime or not
  * @n: the number to check if it's prime
  * @i: integer
  * Return: returns 1 if it's prime, returns 0 otherwise
  */
int check_prime(int n, int i)
{
	if (n == 2)
		return (1);
	if (n % i == 0)
		return (0);
	if (i > n / 2)
		return (1);
	check_prime(n, i + 1);
}

/**
  * is_prime_number - returns 1 or 0
  * @n: integer
  * Return: returns 1 or 0
  */
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
