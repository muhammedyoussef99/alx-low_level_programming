#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 *		and initializes it with a specific char
 * @size: the size of the array
 * @c: the character to initialize the array with
 *
 * Return: pointer to the created array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (0);

	while (size--)
		n[size] = c;

	return (n);
}
