#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* main - Prints the name of the program.
* @argc: The number of command-line arguments.
* @argv: The array of command-line argument strings.
* Return: 0 indicating successful execution.
*/
int main(int argc, char *argv[])
{
char *program_name = strdup(argv[0]);
char *file_name = strrchr(program_name, '/');
if (file_name != NULL)
file_name++;
else
{
file_name = program_name;
}
printf("%s\n", file_name);
free(program_name);
(void)argc;
return (0);
}
