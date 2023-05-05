#include <stdio.h>
void print_buffer(char *b, int size)
{
int i, j;
for (i = 0; i < size; i += 10)
{
for (j = 28; j >= 0; j -= 4)
{
_putchar("0123456789abcdef"[(i >> j) & 0xf]);
}
_putchar(' ');
for (j = i; j < i + 10; j++)
{
if (j < size)
{
for (int k = 1; k >= 0; k--)
{
int c = (b[j] >> (k * 4)) & 0xf;
_putchar("0123456789abcdef"[c]);
}
_putchar(' ');
{
else
{
_putchar(' ');
_putchar(' ');
}
}
for (j = i; j < i + 10; j++)
{
if (j < size)
{
if (b[j] >= 32 && b[j] <= 126)
{
_putchar(b[j]);
}
else
{
_putchar('.');
}
{
else
{
_putchar(' ');
}
}
putchar('\n');
}
if (size <= 0)
{
_putchar('\n');
}
}
