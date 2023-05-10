#include "main.h"
/* Function prototype */
int _putchar(char c);
/**
* _print_rev_recursion - prints a string in reverse
* @s: pointer to the string to print
*/
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
