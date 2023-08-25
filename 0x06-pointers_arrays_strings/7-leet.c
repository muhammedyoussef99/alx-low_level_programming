#include "main.h"
#include <stdio.h>

/**
 * leet - Encodes a string into 1337 speak.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the modified string.
*/
char *leet(char *str)
{
	char *ptr = str;
	char *leet_letters = "aeotlAEOTL";
	char *leet_numbers = "4307143071";

	while (*ptr)
	{
		for (int i = 0; leet_letters[i]; i++)
		{
			if (*ptr == leet_letters[i])
			{
				*ptr = leet_numbers[i];
				break;
			}
		}
		ptr++;
	}

	return (str);
}
