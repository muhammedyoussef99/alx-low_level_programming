/**
 * _strstr - Locates a substring in a string.
 * @haystack: The string to be searched.
 * @needle: The substring to be located.
 *
 * Return: A pointer to the beginning of the located substring,
 * or NULL if the substring is not exist.
*/

char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
		return (haystack);

	while (*haystack != '\0')
	{
		char *haystack_ptr = haystack;
		char *needle_ptr = needle;

		while (*needle_ptr != '\0' && *haystack_ptr == *needle_ptr)
		{
			haystack_ptr++;
			needle_ptr++;
		}

		if (*needle_ptr == '\0')
			return (haystack);

		haystack++;
	}

	return (NULL);
}
