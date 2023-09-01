#include "main.h"

/**
 * _sqrt_recursion - Returns the natural
 *		square root of a number using recursion.
 * @n: the square root of.
 *
 * Return: int.
*/

int _sqrt_recursion(int n)

{
	if (n < 0)
		return (-1);

	return (_sqrt_helper(n, 0, n));
}

/**
 * _sqrt_helper - Helper function to find the square root using binary search.
 * @n: The number to find the square root of.
 * @low: The lower bound of the search.
 * @high: The upper bound of the search.
 *
 * Return: int.
*/

int _sqrt_helper(int n, int low, int high)

{
	if (low > high)
		return (-1);

	int mid = (low + high) / 2;
	long long square = (long long)mid * mid;

	if (square == n)
		return (mid);
	else if (square < n)
		return (_sqrt_helper(n, mid + 1, high));
	else
		return (_sqrt_helper(n, low, mid - 1));
}
