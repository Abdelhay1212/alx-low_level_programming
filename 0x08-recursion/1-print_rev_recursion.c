#include "main.h"

/**
  * print - helps to print the string s.
  * @s: string to be printed.
  * return: void.
  */
void print(char *s)
{
	if (!((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z') || *s == ' '))
		return;
	_putchar(*s);
	print(--s);
}

/**
  * _print_rev_recursion - prints a string in reverse.
  * @s: string to be printed.
  * return: void.
  */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		print(--s);
		_putchar('\n');
		return;
	}
	_print_rev_recursion(++s);
}
