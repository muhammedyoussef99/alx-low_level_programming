#include "main.h"

/**
 * _sqrt_recursion - Returns the natural
 *		square root of a number using recursion.
 * @n: the square root .
 * @d: The current guess for the square root.
 * Return: int.
*/

int square(int n, int d);
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (square(n, 1));
}

/**
 * square - find the square root using recursion.
 * @n: The number to find the square root.
 * @d: The current guess for the square root.
 * Return: int.
*/

int square(int n, int d)
{
	if (d * d == n)
		return (d);

	if (d * d > n)
		return (-1);
	return (square(n, d + 1));
}
