#include "main.h"

/**
 * prin_rev - a function that prints a string,
 *		in reverse, followed by a new line.
 * @s: The string to calculate the length of.
 *
 * Return: The length of the string.
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
