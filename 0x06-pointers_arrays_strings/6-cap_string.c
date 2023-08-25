#include "main.h"
#include <stdio.h>

/**
 * isLower - Determine whether ASCII is lowercase.
 * @c: The character to check.
 *
 * Return: 1 if true, 0 otherwise.
*/
int isLower(char c)
{
	return ((c >= 'a' && c <= 'z'));
}

/**
 * is_separator - Determine whether ASCII is a separator.
 * @c: The character to check.
 *
 * Return: 1 if true, 0 otherwise.
*/
int is_separator(char c)
{
	char separators[] = "\t\n,;.!?\"(){}";

	for (int i = 0; i < 12; i++)
	{
		if (c == separators[i])
			return (1);
	}

	return (0);
}

/**
 * cap_string - Capitalizes all words of a string.
 * @s: Input string.
 *
 * Return: String with capitalized words.
*/
char *cap_string(char *s)
{
	char *ptr = s;

	int is_separator = 1; /*Initialize is_separator to 1*/

	while (*s)
	{

		if (is_separator(*s))
		{
			is_separator = 1;
		}
		else if (isLower(*s) && is_separator)
		{
			*s -= 32; /*Convert lowercase letter to uppercase*/
			is_separator = 0;
		}
		else
		{
			is_separator = 0;
		}
		s++;
	}
	return (ptr);
}
