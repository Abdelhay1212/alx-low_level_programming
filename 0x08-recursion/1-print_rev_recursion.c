#include "main.h"

/**
  * _print_rev_recursion - prints a string in reverse.
  * @s: string to be printed.
  * return: void.
  */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recusion(++s);
		_putchar(*s);
	}
}
