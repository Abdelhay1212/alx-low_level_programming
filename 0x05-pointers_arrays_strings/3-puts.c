#include "main.h"

/**
 * _puts - prints a string
 * @str: the string
 *
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\n')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
