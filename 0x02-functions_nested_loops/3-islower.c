#include <stdio.h>
/**
 * _islower - checks for lowercase character
 * @c: the character to be checked
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
    if (c >= 'a' && c <= 'z')
        return (1);
    else
        return (0);
}
/**
 * test_islower - checks the code for _islower
 *
 * @c: character to be checked
 * @expected: expected result of _islower
 *
 * Return: 0 on success
 */
int test_islower(int c, int expected)
{
  int r;

  r = _islower(c);
  if (r != expected)
    {
      putchar('F');
      return (1);
    }
  else
    {
      putchar('.');
      return (0);
    }
