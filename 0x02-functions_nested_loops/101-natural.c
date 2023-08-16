#include "main.h"

/**
 * main - Entry Point
 *
 * Description: sum_of_multiples - Computes and
 *		prints the sum of multiples of 3 or 5
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int sum, num;

	for (num  = 0; num < 1024; num++)
	{
		if (num % 3 == 0 || num % 5 == 0)
		{
			sum += num;
		}
	}

	printf("%d\n", sum);
	return (0);
}
