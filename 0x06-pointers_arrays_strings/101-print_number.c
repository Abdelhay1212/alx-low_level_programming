#include "main.h"

/**
  * print_number - Prints any integer with putchar
  * @n: Number to prints
  *
  * Return: Nothing
  */
void print_number(int n)
{
	int temp;

	temp = n / 10;
	_putchar(temp / 10);
	_putchar(temp % 10);
	_putchar(n % 10);
}
