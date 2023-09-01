#include "main.h"

/**
 * string_length - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: int.
 */

int is_palindrome(char *s);
int check(char *s, int start, int end, int mod);
int string_length(char *s)
{
	int n = 0;

	if (*s > '\0')
		n += string_length(s + 1) + 1;
	return (n);
}

/**
 * is_palindrome - Calculates the length of a string.
 * @s: The string to be measured.
 *
 * Return: 0 or 1.
*/

int is_palindrome(char *s)
{
	int end = string_length(s);

	return (check(s, 0, end - 1, end % 2));
}

/**
 * check - checker if a string is a palindrome recursively.
 * @s: The string to be checked.
 * @start: int moves from right to left.
 * @end: int moves from left to right.
 * @mod: int.
 * Return: 1 if s is a palindrome, otherwise 0.
*/

int check(char *s, int start, int end, int mod)
{
	if ((start == end && mod != 0) || (start == end + 1 && mod == 0))
		return (1);

	else if (s[start] != s[end])
		return (0);
	else
		return (check(s, start + 1, end - 1, mod));
}
