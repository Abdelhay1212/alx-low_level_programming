#include "main.h"

/**
 * times_table - Prints the n times table, starting with 0.
 */
void times_table(int n)
{
        int num, mult, prod;

        for (num = 0; num <= n; num++)
        {
                _putchar('0');

                for (mult = 1; mult <= n; mult++)
                {
                        _putchar(',');
                        _putchar(' ');

                        prod = num * mult;

                        if (prod <= n)
                                _putchar(' ');
                        else
                                _putchar((prod / 10) + '0');

                        _putchar((prod % 10) + '0');
                }
                _putchar('\n');
        }
}
