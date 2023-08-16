#include "main.h"

/**
 * sum_of_multiples - Computes and prints the sum of multiples of 3 or 5
*/

void sum_of_multiples(void)
{
	int sum = 0;

	for (int i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}

	print_number(sum);
	_putchar('\n');
}
