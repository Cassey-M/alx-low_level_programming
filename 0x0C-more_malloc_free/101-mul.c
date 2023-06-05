#include <stdlib.h>
#include "main.h"
/**
* _isdigit - Checks if a character is a digit (0-9)
* @c: The character to be checked
*
* Return: 1 if the character is a digit, 0 otherwise
*/
int _isdigit(int c)
{
return (c >= '0' && c <= '9');
}
/**
* _strlen - Calculates the length of a string
* @s: The string to be measured
*
* Return: The length of the string
*/
unsigned int _strlen(char *s)
{
unsigned int len = 0;
while (*s++)
len++;
return (len);
}
/**
* _puts - Prints a string to the standard output
* @str: The string to be printed
*/
void _puts(char *str)
{
while (*str)
_putchar(*str++);
}
/**
* print_error_and_exit - Prints "Error" to the standard output and exits
*/
void print_error_and_exit(void)
{
_puts("Error");
_putchar('\n');
exit(98);
}
/**
* mul - Multiplies two positive numbers
* @num1: The first number as a string
* @num2: The second number as a string
*/
void mul(char *num1, char *num2)
{
int len1, len2, i, j, n1, n2, carry, digit;
int *result;
len1 = _strlen(num1);
len2 = _strlen(num2);
result = malloc((len1 + len2) * sizeof(int));
if (result == NULL)
print_error_and_exit();
for (i = 0; i < len1 + len2; i++)
result[i] = 0;
for (i = len1 - 1; i >= 0; i--)
{
n1 = num1[i] - '0';
carry = 0;
for (j = len2 - 1; j >= 0; j--)
{
n2 = num2[j] - '0';
digit = n1 * n2 + result[i + j + 1] + carry;
carry = digit / 10;
result[i + j + 1] = digit % 10;
}
if (carry > 0)
result[i + j + 1] += carry;
}
i = 0;
while (result[i] == 0)
i++;
if (i == len1 + len2)
_putchar('0');
else
{
while (i < len1 + len2)
_putchar(result[i++] + '0');
}
_putchar('\n');
free(result);
}
/**
* main - Entry point
* @argc: The number of command-line arguments
* @argv: An array containing the command-line arguments
*
* Return: 0 on success, 98 on failure
*/
int main(int argc, char *argv[])
{
int i, j;
if (argc != 3)
{
print_error_and_exit();
}
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j]; j++)
{
if (!_isdigit(argv[i][j]))
print_error_and_exit();
}
}
mul(argv[1], argv[2]);
return (0);
}
