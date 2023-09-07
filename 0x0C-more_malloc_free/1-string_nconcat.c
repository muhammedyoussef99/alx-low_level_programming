#include "main.h"
#include <stdio.h>

/**
 * string_nconcat - Concatenates two strings with a limit on the second string.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of characters from s2 to concatenate.
 *
 * Return: A pointer to the newly allocated concatenated string,
 *		or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int x, y, s1_length, s2_length;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (s1_length = 0; s1[s1_length] != '\0'; s1_length++)
		;
	for (s2_length = 0; s2[s2_length] != '\0'; s2_length++)
		;
	str = malloc(s1_length + n + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	for (x = 0; s1[x] != '\0'; x++)
		str[x] = s1[x];
	for (y = 0; y < n ; y++)
	{
		str[x] = s2[y];
		x++;
	}
	str[x] = '\0';
	return (str);
}
