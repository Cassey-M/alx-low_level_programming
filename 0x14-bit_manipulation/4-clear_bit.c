#include "main.h"
/*
* clear_bit - Sets the value of a bit to 0 at a given index.
* @n: Pointer to an unsigned long int number.
* @index: Index of the bit to set.
*
* Return: 1 if it worked, or -1 if an error occurred.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
return (-1);
*n = *n & ~(1 << index);
return (1);
}
