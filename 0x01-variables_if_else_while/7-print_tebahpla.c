#include <stdio.h>
/**
*main - print the alphabets in reverse
*Return: Always 0
*/
int main(void)
{
int letter;
for (letter = 'z'; letter >= 'a'; letter--)
putchar(letter);
putchar('\n');
return (0);
}
