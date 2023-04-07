#include "main.h"
#include <string.h>

/**
 * check_palindrome - checks if a string is a palindrome or not
 * @i: integer
 * @j: integer
 * Return: 1 or 0
 */
int check_palindrome(char *s, int i, int j)
{
	if (s[i] != s[j])
		return (0);
	if (i > j)
		return (1);
	return (check_palindrome(s, i + 1, j - 1));
}

/**
 * is_palindrome - calls the function check_palindrome
 * @s: the string to be checked
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	int j = strlen(s);
	return (check_palindrome(s, 0, j - 1));
}
