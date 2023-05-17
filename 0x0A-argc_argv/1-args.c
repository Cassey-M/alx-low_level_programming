#include <stdio.h>
/**
* main - prints the number of arguments.
* @argc: The number of command-line arguments
* @argv: An array of strings containing the command-line arguments
*
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
int num_args = argc - 1;
printf("%d\n", num_args);
(void)argv;
return (0);
}
