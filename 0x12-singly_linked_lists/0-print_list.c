#include "lists.h"

/**
 * _strlen - Calculate the length of a string.
 * @s: A pointer to the string.
 *
 * Return: The length of the string, or 0 if the string is NULL.
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}

/**
 * print_list - Print elements of a singly linked list of strings.
 * @h: A pointer to the head of the linked list.
 *
 * Return: The number of nodes (elements) in the list.
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}
