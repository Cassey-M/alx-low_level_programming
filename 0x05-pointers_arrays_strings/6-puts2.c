#include <stdio.h>
int _putchar(char c);
void puts2(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        _putchar(str[i]);
        i += 2;
    }

    _putchar('\n');
}
