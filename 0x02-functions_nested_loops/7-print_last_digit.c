#include "main.h"
/**
* print_last_digit - prints the last digit.
* @n: the number
* Return: Value of the last digit
*/
int print_last_digit(int n)
{
int last_digit = n % 10;
if (last_digit < 0)
{
last_digit = -last_digit;
}
putchar(last_digit + '0');
return (last_digit);
}
