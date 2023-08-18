#include "main.h"

/**
 * print_diagonal - print a diagonal line
 *		of length n using the '\' character.
 * @n: The number of times
 *		the character '\' should be printed.
*/

void print_diagonal(int n)
{
	int postn, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (postn = 1; postn <= n; postn++)
		{
			for (space = 1; space <= postn; space++)
				_putchar(' ');
			_putchar('\\'); /* Print the '\' character for the diagonal*/
			_putchar('\n');
		}
	}
}
