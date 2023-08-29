#include "main.h"

/**
 * _memset - Fills the first n bytes of a memory area with a constant byte.
 * @s: Pointer to the memory area to be filled.
 * @b: The constant byte to fill the memory with.
 * @n: The number of bytes to fill.
 *
 * Return: A pointer to the memory area s.
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int ptr;

	for (ptr = 0; n > 0; ptr++, n--)
	{
		s[ptr] = b;
	}

	return (s);
}
