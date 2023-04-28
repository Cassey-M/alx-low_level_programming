#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_line(int n)
{
  if (n > 0)
  {
    for (int i = 0; i < n; i++)
    {
       putchar('_');
    }
     putchar('\n');
  }
  else
  {
     putchar('\n');
  }
}
