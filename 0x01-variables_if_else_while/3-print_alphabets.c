#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet followed by a new line.
 *              Only the putchar function is used.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char lowercase, uppercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		putchar(lowercase);
	}
	for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
	{
		putchar(uppercase);
	}
	putchar('\n');

	return (0);
}
