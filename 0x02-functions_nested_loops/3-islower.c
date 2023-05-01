#include <stdio.h>
/**
 * _islower -  checks for lowercase character.
 * @c: character to be checked
 * Return: 1 if character is a lowercase, 0 if not
 */
int _islower(int c)
{
  if (c >= 'a' && c <= 'z')
  {
    return (1);
  }
  else 
  {
    return (0);
  }
}
