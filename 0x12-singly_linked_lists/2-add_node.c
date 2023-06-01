#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @str: String to be added as the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *str_copy;
	size_t len = 0;

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	str_copy = malloc(sizeof(char) * (len + 1));
	if (str_copy == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (len = 0; str[len]; len++)
		str_copy[len] = str[len];
	str_copy[len] = '\0';

	new_node->str = str_copy;
	new_node->len = len;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
