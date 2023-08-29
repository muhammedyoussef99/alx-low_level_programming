#include "main.h"

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: The pointer to the matrix (array of integers).
 * @size: The size of the square matrix.
*/

void print_diagsums(int *a, int size)
{
	int ptr, s1 = 0, s2 = 0;

	for (ptr = 0; ptr < size; ptr++)
	{
		s1 += a[ptr];
		s2 += a[size - ptr - 1];
		a += size;
	}
	printf("%d, ", s1);
	printf("%d\n", s2);
}
