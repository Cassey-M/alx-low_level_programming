#include <stdio.h>
#include "lists.h"
#include <unistd.h>

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes.
 */
size_t print_list(const list_t *h)
{
    size_t count = 0;

    while (h != NULL)
    {
        if (h->str == NULL)
            write(1, "[0] (nil)\n", 10);
        else
            printf("[%ld] %s\n", h->len, h->str);

        h = h->next;
        count++;
    }

    return (count);
}
