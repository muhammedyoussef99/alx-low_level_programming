#include "main.h"

/**
 * print_times_table - Prints the n times table
 * @n: The number for which the times table is printed
*/

void print_times_table(int n)
{
	int row, column, product;

	if (n < 0 || n > 15)
		return;


	for (row = 0; row <= n; row++)
	{
		for (column = 0; column <= n; column++)
		{
			product = row * column;

			if (column > 0)
			{
				_putchar(',');
				_putchar(' ');
			}

			if (product <= 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(product + '0');
			}
			else if (product <= 99)
			{
				_putchar(' ');
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			else
			{
				_putchar((product / 100) + '0');
				_putchar(((product / 10) % 10) + '0');
				_putchar((product % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
