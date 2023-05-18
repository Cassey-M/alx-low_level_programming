#include <stdio.h>
#include <stdlib.h>
/**
* main - Calculates the minimum number of coins to make change.
*
* @argc: The number of command-line arguments.
* @argv: The array of command-line argument strings.
* Return: 0 indicating successful execution, 1 otherwise.
*/
int main(int argc, char *argv[])
{
int coins = 0;
int cents = atoi(argv[1]);
if (argc != 2)
{
printf("Error\n");
return (1);
}
if (cents < 0)
{
printf("0\n");
return (0);
}
coins += cents / 25;
cents %= 25;
coins += cents / 10;
cents %= 10;
coins += cents / 5;
cents %= 5;
coins += cents / 2;
cents %= 2;
coins += cents;
printf("%d\n", coins);
return (0);
}
