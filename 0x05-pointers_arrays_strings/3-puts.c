#include "main.h"

/**
 * print_string - Prints a string followed by a new line to stdout.
 * @str: The string to be printed.
*/
void print_string(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
