#include <stdio.h>
/**
* main - Entry point
*
* Description: Prints the lowercase alphabet followed by a new line.
* Only uses the putchar function.
* Returns: Always 0 (Success)
*/
int main(void)
{
char letter = 'a';
while (letter <= 'z')
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
