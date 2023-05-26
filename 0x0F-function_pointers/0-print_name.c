#include <stdio.h>
/**
* print_name - print a name
*
* @name: name of the person
* @f: Pointer to a function that prints the name.
* Return: Nothing.
*/
void print_name(char *name, void (*f)(char *))
{
f(name);
}
