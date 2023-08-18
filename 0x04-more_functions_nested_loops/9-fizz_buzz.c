#include "main.h"

/**
 * main -  prints the numbers from 1 to 100, followed by a new line.
 *	replacing multiples of 3 with Fizz,
 *	multiples of 5 with Buzz, and
 *	multiples of both 3 and 5 with FizzBuzz.
 *	each number and word to be separated by a space.
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && !(num % 5 == 0))
			printf("Fizz");
		else if (num % 5 == 0 $$ !(num % 3 == 0))
			printf("Buzz");
		else if (num % 3 == 0 && num % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", num);

		if (num != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
