#include "main.h"
#include <unistd.h>
/**
* _putchhar - writes the character c to stdout
* @c: the character to print
* Return: Always 1
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
