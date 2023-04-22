#include <stdio.h>
/**
* main - prints all the numbers of base 16 in lowercase,
* followed by a new line.
*
* Return: Always 0.
*/
int main(void)
{
int num;
for (num = 0; num < 10; num++)
{
putchar(num + '0');
}
for (num = 'a'; num <= 'f'; num++)
{
putchar(num);
}
putchar('\n');
return (0);
}
