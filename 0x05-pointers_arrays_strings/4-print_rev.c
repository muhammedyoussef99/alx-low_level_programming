#include "main.h"

/**
 * print_rev - Prints a string
 *		in reverse, followed by a new line.
 *
 * @s: The string to calculate the length of.
 *
 * return: void
*/

void print_rev(char *s)

{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
