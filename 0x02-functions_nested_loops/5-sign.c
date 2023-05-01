#include <stdio.h>
/**
* print_sign - prints sign of a number
* @n: the number to be checked
* Return: 1 if positive, -1 if negative, 0 if not
*/
int _putchar(char c);
int print_sign(int n) 
{
if (n > 0) 
{
_putchar('+');
return (1);
}
else if (n == 0) 
{
_putchar('0');
return (0);
}
else 
{
_putchar('-');
return (-1);
}
}
