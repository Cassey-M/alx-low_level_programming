#include <stdio.h>
#include <ctype.h>
/**
* _islower - checks if a character is lowercase
* @c: the character
* Return: 1 if letter is lowercase, 0 if not
*/
int _islower(int c);
int main(void)
{
char ch = 'a';
if (_islower(ch))
{
putchar(ch);
putchar(' ');
putchar('i');
putchar('s');
putchar(' ');
putchar('l');
putchar('o');
putchar('w');
putchar('e');
putchar('r');
putchar('c');
putchar('a');
putchar('s');
putchar('e');
putchar('\n');
}
return (1);
else
{
putchar(ch);
putchar(' ');
putchar('i');
putchar('s');
putchar(' ');
putchar('n');
putchar('o');
putchar('t');
putchar(' ');
putchar('l');
putchar('o');
putchar('w');
putchar('e');
putchar('r');
putchar('c');
putchar('a');
putchar('s');
putchar('e');
putchar('\n');
}
return (0);
}
