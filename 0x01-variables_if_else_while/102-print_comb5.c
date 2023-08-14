#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of two two-digit numbers
 *              in ascending order, separated by comma and space.
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int num1 = 0;
	int num2;

	while (num1 <= 98)
	{
		num2 = num1 + 1;
		while (num2 <= 9)
		{
			putchar(num1 / 10 + '0');
			putchar(num1 % 10 + '0');
			putchar(' ');
			putchar(num2 / 10 + '0');
			putchar(num2 % 10 + '0');

			if (num1 != 98 || num2 != 99)
			{
				putchar(',');
				putchar(' ');
			}

			num2++;
		}
		num1++;
	}

	putchar('\n');

	return (0);
}
