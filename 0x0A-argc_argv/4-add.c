#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - function that adds positive numbers.
*
* @argc: The number of command-line arguments.
* @argv: The array of command-line argument strings.
* Return: 0 indicating successful execution, 1 otherwise.
*/
int main(int argc, char *argv[])
{
int sum = 0;	
int i;
int j;
if (argc == 1)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
