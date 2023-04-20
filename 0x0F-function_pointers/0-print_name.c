#include <stdio.h>

/**
 * print_name -  prints a name.
 * @name: the name to print
 * @f: pointer to function
 * Return: void
 **/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
