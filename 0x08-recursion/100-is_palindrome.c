
/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: 1 if s is a palindrome, otherwise 0.
 */

int is_palindrome(char *s)
{
	int len = string_length(s);

	if (len <= 1)
		return (1);

	return (check_palindrome(s, len, 0));
}

/**
 * string_length - Calculates the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
*/

int string_length(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + string_length(s + 1));
}

/**
 * check_palindrome - Helper function to check
 *		if a string is a palindrome recursively.
 * @s: The string to be checked.
 * @len: The length of the string.
 * @index: The current index of the string being checked.
 *
 * Return: 1 if s is a palindrome, otherwise 0.
*/

int check_palindrome(char *s, int len, int index)
{
	if (index >= len / 2)
		return (1);

	if (s[index] != s[len - index - 1])
		return (0);

	return (check_palindrome(s, len, index + 1));
}
