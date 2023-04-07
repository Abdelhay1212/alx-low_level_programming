#include "main.h"

/**
 * check - calculate the square root of a number
 * @root:int
 * @n:int
 * Return: int
 */
int check(int root, int n)
{
	if (root * root == n)
		return (root);
	if (root * root > n)
		return (-1);
	return (check(root + 1, n));
}

/**
 * _sqrt_recursion - returns square root of a number
 * @n: integer
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}
