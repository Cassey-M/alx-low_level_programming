#include <stdio.h>
int _putchar(char c);
void _putchar(char c)
{
    putchar(c);
}

int main() {
    char src[] = "Hello, world!";
    char dest[50];

    _strcpy(dest, src);

    for (int i = 0; dest[i] != '\0'; i++)
    {
        _putchar(dest[i]);
    }
    _putchar('\n');

    return (0);
}
