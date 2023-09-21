#include "lists.h"

/**
 * add_node - Add a new node at the beginning of a linked list.
 * @head: A pointer to a pointer to the head of the linked list.
 * @str: The string to be stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head = malloc(sizeof(list_t));

	if (!head || !new_head)
		return (NULL);
	if (str)
	{
		new_head->str = strdup(str);
		if (!new_head->str)
		{
			free(new_head);
			return (NULL);
		}
		new_head->len = _strlen(new_head->str);
	}

	new_head->next = *head;
	*head = new_head;
	return (new_head);
}
