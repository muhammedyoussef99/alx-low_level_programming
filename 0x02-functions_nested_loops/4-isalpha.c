#include "main.h"

/**
 * _isalpha - Checks if a character is an alphabetic character
 * @c: The character to be checked
 *
 * Return: 1 if c is an alphabetic character, 0 otherwise
 */
int _isalpha(int c)
{
	if ((_islower(c) || (c >= 'A' && c <= 'Z')))
		return (1);
	else
		return (0);
}
