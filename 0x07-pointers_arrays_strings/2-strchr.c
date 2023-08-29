#include "main.h"

/**
 * _strchr - Locates the first occurrence of a character in a string.
 * @s: The string to be searched.
 * @c: The character to be located.
 *
 * Return:  pointer to s.
*/

char *_strchr(char *s, char c)
{
	int ptr;

	for (ptr = 0; s[ptr] >= '\0'; ptr++)
	{
		if (*s == c)
		{
			return (s + ptr);
		}
	}

	return ('\0');
}
