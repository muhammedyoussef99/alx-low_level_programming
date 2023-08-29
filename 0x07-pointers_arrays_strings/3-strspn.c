#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be searched.
 * @accept: The string containing accepted characters.
 *
 * Return: The number of bytes in the initial segment of s which consist
 * only of bytes from accept.
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int ptr, qtr;

	for (ptr = 0; s[ptr] != '\0'; ptr++)
	{
		for (qtr = 0; accept[qtr] != s[ptr]; qtr++)
		{
			if (accept[qtr] == '\0')
				return (ptr);
		}
	}
	return (ptr);
}
