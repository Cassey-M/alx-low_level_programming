#include <stdio>
#include "main.h"
/**
* print_to_98 - print all numbers from input to 98
*@n: the starting number
*/
void print_to_98(int n)
{
if (n <= 98)
{
for (int i = n; i <= 98; i++)
{
printf("%d", i);
if (i != 98)
{
printf(", ");
}
}
}
else
{
for (int i = n; i >= 98; i--)
{
printf("%d", i);
if (i != 98)
{
printf(", ");
}
}
}
printf("\n");
}
