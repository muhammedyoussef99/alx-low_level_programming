#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all the numbers of base 16 in lowercase.
 *
 * Return: 0 (Success)
*/

int main(void)
{
	char digit

	while (digit = '0'; digit <= '9')
	{
		putchar(digit);
		digit++;
	}
	while (digit = 'a'; digit <= 'f')
	{
		putchar(digit);
		digit++;
	}
	putchar('\n');

	return (0);
}
