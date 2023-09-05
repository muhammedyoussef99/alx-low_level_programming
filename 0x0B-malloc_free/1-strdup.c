#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if insufficient memory
 * was available or if str is NULL
 */
char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *n;

	if (str == NULL)
		return (NULL);

	/* Calculate the size of the input string */
	while (str[size] != '\0')
		size++;
	/* Allocate memory for the duplicate string */
	n = malloc((size + 1) * sizeof(char));

	if (n  == NULL)
		return (NULL);

	/* Copy the characters from the original string to the duplicate */
	for (i = 0; i <= size; i++)
		n[i] = str[i];

	return (n);
}
