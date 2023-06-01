#include <stdio.h>
#include "lists.h"
/**
* print_list -  Prints all the elements of a linked list.
*
* @h: A pointer to the head of the linked list.
* Return: The number of nodes in the linked list.
*
* Prints the elements of the linked list in the following format:
*   [0] <str_value_of_node_0>
*   [1] <str_value_of_node_1>
*   ...
*
* If the string value of a node is NULL, it prints "(nil)" instead.
* Returns the total number of nodes in the linked list.
*/
size_t print_list(const list_t *h)
{
const list_t *current = h; /* Start from the head of the list */
size_t count = 0; /* Initialize count to 0 */
while (current != NULL)
{
if (current->str != NULL)
{
printf("[%ld] %s\n", count, current->str);
}
else
{
printf("[%ld] (nil)\n", count);
}
count++; /* Increment the count for each node */
current = current->next; /*  Move to the next node */
}
return (count);
}
