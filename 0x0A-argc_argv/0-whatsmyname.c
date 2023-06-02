#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* main - Entry point of the program
* @argc: The number of command-line arguments
* @argv: An array of strings containing the command-line arguments
*
* Return: Always 0 (indicating successful execution)
*/
int main(int argc, char *argv[])
{
char *programName;
(void)argc;
programName = strrchr(argv[0], '/');
if (programName == NULL) 
{
programName = argv[0];
}
else
{
programName++;
}
while (*programName)
{
_putchar(*programName);
programName++;
}
_putchar('\n');
return (0);
}
/**
* _putchar - Prints a character to the standard output
* @c: The character to be printed
*
* Return: The printed character as an unsigned char cast to an int
*/
int _putchar(char c)
{
return putchar(c);
}
