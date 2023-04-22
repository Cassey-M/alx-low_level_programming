#include <stdio.h>
/**
*main - prints the numbers in base 16
*Return: Always 0
*/
int main(void)
{
int i;
char i;
for (i = 0; i < 10; i++)
putchar((i % 10) + '0');
for (i = 'a'; i <= 'f'; i++)
putchar(i);
putchar('\n');
return (0);
}
