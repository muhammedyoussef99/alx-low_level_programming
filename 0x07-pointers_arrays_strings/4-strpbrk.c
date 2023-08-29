#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to be searched.
 * @accept: The string containing bytes to search for.
 *
 * Return: A pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found.
*/

char *_strpbrk(char *s, char *accept)
{
	int ptr, qtr;
	char *p;

	ptr = 0;
	while (s[ptr] != '\0')
	{
		qtr = 0;
		while (accept[qtr] != '\0')
		{
			if (accept[qtr] == s[ptr])
			{
				p = &s[ptr];
				return (p);

			}
			qtr++;
		}
		ptr++;
	}

	return (NULL);
}
