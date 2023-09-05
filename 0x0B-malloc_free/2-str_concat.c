#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 *
 * Return: pointer to the concatenated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *n;
	int size1 = 0, size2 = 0;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[size1])
		size1++;
	while (s2[size2])
		size2++;

	n = malloc((size1 + size2 + 1) * sizeof(char));
	if (n == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		n[i] = s1[i];

	for (j = 0; j < size2; j++, i++)
		n[i] = s2[j];

	n[i] = '\0';

	return (n);
}
