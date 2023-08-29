#include "main.h"

/**
 * _memcpy - Copies n bytes from a memory area src to memory area dest.
 * @dest: Pointer to the destination memory area.
 * @src: Pointer to the source memory area.
 * @n: The number of bytes to copy.
 *
 * Return: A pointer to the destination memory area.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int ptr;

	for (ptr = 0; ptr < n; ptr++)
	{
		dest[ptr] = *src[ptr];
	}

	return (dest);
}
