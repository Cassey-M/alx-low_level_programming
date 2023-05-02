#include <stdio.h>
int _putchar(char c);
void print_rev(char *s)
{
  int i = 0;
  while (s[i] != '\0')
  {
    i++;
  }
  i--;

  while (i >= 0)
  {
    _putchar(s[i]);
    i--;
  }

  _putchar('\n');
}
