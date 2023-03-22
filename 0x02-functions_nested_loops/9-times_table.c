#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int i = 0;
	int j = 0;

	for (i = 0; i <= 9; i++)
	{
		int add = 0;
		for (j = 0; j <= 9; j++)
		{
			if(add >= 10)
			{
				putchar((add / 10) + '0');
				putchar((add % 10) + '0');
			}
			else
			{
				putchar(add + '0');
			}

			if(j < 9)
			{
				putchar(',');
			}

			putchar(' ');
			add += i;
		}

		putchar('\n');
	}
}
