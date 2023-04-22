#include <stdio.h>
/**
* main - Entry point
*
* Description: Prints the alphabet in lowercase, then in uppercase
*
* Return: Always 0 (Success)
*/
int main(void)
{
char letter;
/* print lowercase alphabet */
for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);
/* print uppercase alphabet */
for (letter = 'A'; letter <= 'Z'; letter++)
putchar(letter);
/* print newline */
putchar('\n');
return (0);
}
