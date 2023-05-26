#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
/** 
* print_numbers - Prints a variable number of integers.
*
* @separator: The string to be printed between numbers.
*            If separator is NULL, it is not printed.
*
* @n: The number of integers passed to the function.
*
* @...: Variable arguments of type int representing numbers to be printed.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
va_start(args, n);
for (i = 0; i < n; i++)
{
int num = va_arg(args, int);
printf("%d", num);
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
va_end(args);
printf("\n");
}
