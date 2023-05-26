#include <stdarg.h>
#include <stdio.h>
/**
* print_strings - Prints a variable number of strings followed by a new line.
*
* @separator: The string to be printed between the strings.
*             If separator is NULL, it is not printed.
* @n: The number of strings passed to the function.
* @...: Variable arguments of type char* representing the strings to be printed.
*        If a string is NULL, it is printed as (nil).
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
va_start(args, n);
for (i = 0; i < n; i++)
{
char *str = va_arg(args, char *);
if (str != NULL)
{
printf("%s", str);
} else {
printf("(nil)");
}
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
va_end(args);
printf("\n");
}
