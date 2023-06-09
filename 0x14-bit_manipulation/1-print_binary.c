#include "main.h"
/*
* print_binary - Prints the binary representation of a number.
* @n: Unsigned long int number to print in binary.
*
* Format: The binary representation of the number n.
* Restrictions: Cannot use arrays, malloc, % or / operators.
*/
void print_binary(unsigned long int n)
{
if (n > 1)
print_binary(n >> 1);
_putchar((n & 1) + '0');
}
