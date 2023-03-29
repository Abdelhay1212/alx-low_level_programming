#include "main.h"

/**
 * rev_string - reverses a string
 * _putchar - print each character
 * @s: char to check
 *
 * Description: This will reverse a string
 * Return: void
 */
void rev_string(char *s)
{
	int n = 0, i, j;

	while (s[n] != '\n')
		n++;

	for (i = 0, j = --n; i < j / 2; i++, j--)
	{
		int temp;

		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
