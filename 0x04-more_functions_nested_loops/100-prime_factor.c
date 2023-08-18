#include "main.h"

/**
 * largest_prime_factor - Finds the largest prime factor of a number.
 * @n: The number to find the largest prime factor for.
 *
 * Return: The largest prime factor of the number.
*/
long int largest_prime_factor(long int n)
{
	long int largest = 0;

	while (n % 2 == 0)
	{
		largest = 2;
		n /= 2;
	}

	for (long int i = 3; i <= n; i += 2)
	{
		while (n % i == 0)
		{
			largest = i;
			n /= i;
		}
	}

	return (largest);
}
/**
 * _putchar - Writes a character to the standard output (stdout).
 * @c: The character to be written.
 *
 * Return: On success, 1. On error, -1 is returned,
 * and errno is set appropriately.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
