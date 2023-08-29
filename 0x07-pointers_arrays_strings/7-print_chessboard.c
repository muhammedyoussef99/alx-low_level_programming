#include "main.h"

/**
 * print_chessboard - Prints a chessboard.
 * @a: The 2D array representing the chessboard.
 * Return: nothing.
*/
void print_chessboard(char (*a)[8])
{
	int ptr, qtr;

	for (ptr = 0; ptr < 8; ptr++)
	{
		for (qtr = 0; qtr < 8; qtr++)
		{
			_putchar(a[ptr][qtr]);
		}
		_putchar('\n');
	}
}
