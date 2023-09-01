#include "main.h"

/**
 * _sqrt_recursion - Returns the natural
 *		square root of a number using recursion.
 * @n: the square root of.
 *
 * Return: int.
*/

int _sqrt_recursion(int n)
int square(int n);

{
	if (n < 0)
		return (-1);

	return (square(n, 1));
}

/**
 * _sqrt_helper - Helper function to find the square root using binary search.
 * @n: The number to find the square root of.
 * @d: The current guess for the square root.
 *
 * Return: int.
*/

int square(int n, int d);

{
	if (d * d == n)
		return (d);

	if (d * d > n)
		return (-1);
	return (square(n, d + 1));
}
