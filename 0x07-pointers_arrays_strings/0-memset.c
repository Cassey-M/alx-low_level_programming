#include <stdio.h>
/**
* _memset - Fill memory with a constant byte
*
* @s: pointer to the memory area to be filled
* @b: the constant byte to fill the memory area with
* @n: the number of bytes to be filled
*
* Return: a pointer to the filled memory area
*/
char *_memset(char *s, char b, unsigned int n)
{
char *p = s;
while (n-- > 0)
{
*p++ = b;
}
return (s);
}
