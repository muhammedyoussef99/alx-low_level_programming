#include "main.h"
#include <stdio.h>

/**
 * is_separator - Checks if a character is a word separator.
 * @c: The character to check.
 *
 * Return: 1 if the character is a separator, 0 otherwise.
*/
int is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";

	for (int i = 0; separators[i] != '\0'; i++)
	{
		if (c == separators[i])
			return (1);
	}

	return (0);
}

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the modified string.
*/
char *cap_string(char *str)
{
	int new_word = 1;

	char *ptr = str;

	while (*ptr != '\0')
	{
		if (is_separator(*ptr))
		{
			new_word = 1;
		}
		else if (new_word)
		{
			if (*ptr >= 'a' && *ptr <= 'z')
			{

				*ptr = *ptr - ('a' - 'A');
			}
			new_word = 0;
		}
		else
		{
			if (*ptr >= 'A' && *ptr <= 'Z')
			{
				*ptr = *ptr + ('a' - 'A');
			}
		}

		ptr++;
	}

	return (str);
}
