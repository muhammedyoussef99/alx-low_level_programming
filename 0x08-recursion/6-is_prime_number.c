#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - Checks if a number is a prime number.
 * @n: The number to be checked.
 *
 * Return: 1 if n is a prime number, otherwise 0.
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_prime(n, 2));
}

/**
 * _is_prime - check if a number is prime recursively.
 * @n: The number to be checked.
 * @i: The current divisor to check.
 *
 * Return: 1 if n is prime, otherwise 0.
*/

int _is_prime(int n, int i)
{
	if (i <= n / 2)
	{
		if (n % i == 0)
			return (0);
		else
			return (_is_prime(n, i + 1));
	}
	return (1);
}
