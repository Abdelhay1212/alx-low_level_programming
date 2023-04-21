#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything.
 * @format: operations
 * Return: void
 */
void print_all(const char * const format, ...)
{
	unsigned int i, test;
	char *s;
	va_list args;

	va_start(args, format);
	i = 0;

	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				test = 0;
				break;
			case 'i':
				printf("%i", va_arg(args, int));
				test = 0;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				test = 0;
				break;
			case 's':
				s = va_arg(args, char*);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				test = 0;
				break;
			default:
				test = 1;
				break;
		}
		if (format[i + 1] != '\0' && test == 0)
			printf(", ");
		i++;
	}
	va_end(args);
	printf("\n");
}
