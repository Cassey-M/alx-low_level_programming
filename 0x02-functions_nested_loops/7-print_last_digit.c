#include <stdio.h>
#include "main.h"
/**
* print_last_digit - prints the last digit.
* @n: the number
* Return: Value of the last digit
*/
int print_last_digit(int num)
{
int last_digit = num % 10;
if (last_digit < 0)
{
last_digit *= -1;
}
_putchar('0' + last_digit);
return (last_digit);
}
