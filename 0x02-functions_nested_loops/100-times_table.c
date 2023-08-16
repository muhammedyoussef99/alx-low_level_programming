#include "main.h"

/**
 * print_times_table - Prints the n times table
 * @n: The number for which the times table is printed
*/

void print_times_table(int n)
{
	if (n < 0 || n > 15)
		return;

	int row, column, product;

	for (row = 0; row <= n; row++)
	{
		_putchar('0');
		for (column = 1; column <= n; column++)
		{
			_putchar(',');
			_putchar(' ');

			product = row * column;

			if (product <= 9)
				_putchar(' ');
			else
				_putchar((product / 10) + '0');

			_putchar((product % 10) + '0');
		}

		_putchar('\n');
	}
}
