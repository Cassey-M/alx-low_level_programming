#include <stdio.h>
/**
 * isupper  -  checks for uppercase character
 * @c: the character
 * Return: 1 for uppercase, 0 if not
 */
int _isupper(int c) {
    if (c >= 'A' && c <= 'Z')
    {
        return (1);
    }
    else {
        return (0);
    }
}
