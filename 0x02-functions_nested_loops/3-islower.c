#include <stdio.h>
/**
 * _islower - checks for lowercase character.
 * @c: the character to be checked
 * Return: 1 ic character is lowercase, 0 if not
 */
int _putchar(int c);
int _islower(int c)
{
    if (c >= 'a' && c <= 'z') 
    {
        _putchar('1');
    }
    else 
    {
        _putchar('0');
    }
    _putchar('\n');
    return (0);
}
