#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Pointer to the address of the head of the list.
 * @str: String to be added as the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new_node, *last_node;
    char *new_str;
    size_t len = 0;

    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
        return (NULL);

    if (str != NULL)
    {
        new_str = strdup(str);
        if (new_str == NULL)
        {
            free(new_node);
            return (NULL);
        }

        while (str[len])
            len++;
    }
    else
    {
        new_str = NULL;
    }

    new_node->str = new_str;
    new_node->len = len;
    new_node->next = NULL;

    if (*head == NULL)
    {
        *head = new_node;
    }
    else
    {
        last_node = *head;
        while (last_node->next != NULL)
            last_node = last_node->next;

        last_node->next = new_node;
    }

    return (new_node);
}

