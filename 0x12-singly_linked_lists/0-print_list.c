#include <stddef.h>
#include "lists.h"
void print_number(size_t n);
/**
* print_list - Prints all the elements of a list_t list.
* @h: Pointer to the head of the list.
*
* Return: The number of nodes.
*/
size_t print_list(const list_t *h)
{
size_t count = 0;
size_t i;
while (h != NULL)
{
if (h->str == NULL)
{
_putchar('[');
_putchar('0');
_putchar(']');
_putchar(' ');
_putchar('(');
_putchar('n');
_putchar('i');
_putchar('l');
_putchar(')');
_putchar('\n');
}
else
{
size_t len = 0;
while (h->str[len] != '\0')
len++;
_putchar('[');
print_number(len);
_putchar(']');
_putchar(' ');
for (i = 0; h->str[i] != '\0'; i++)
_putchar(h->str[i]);
_putchar('\n');
}
count++;
h = h->next;
}
return (count);
}
/**
* print_number - Prints a positive integer using _putchar.
* @n: The number to be printed.
*/
void print_number(size_t n)
{
if (n / 10)
print_number(n / 10);
_putchar((n % 10) + '0');
}
