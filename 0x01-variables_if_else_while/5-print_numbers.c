#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all single digit numbers of base 10 starting from 0 .
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int number;

	while (number < 10)
	{
		printf("%d", number);
		number++;
	}
	printf("\n");

	return (0);
}

