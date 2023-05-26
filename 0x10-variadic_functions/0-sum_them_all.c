#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/** 
* Function: sum_them_all
*
* Calculates the sum of a variable number of arguments.
*
* n: The number of arguments passed.
*    If n is 0, the function returns 0.
*    Otherwise, it expects n arguments of type int.
*
* Returns: The sum of all the arguments.
*/
int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
va_list args;
unsigned int i;
if (n == 0)
{
return (0);
}
va_start(args, n); 
for (i = 0; i < n; i++)
{
sum += va_arg(args, int);
}
va_end(args);
return (sum);
_putchar('\n');
}
