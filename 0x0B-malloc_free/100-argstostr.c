#include <stdlib.h>
/**
* argstostr - concatenates all the arguments of a program
* @ac: argument count
* @av: array of argument strings
*
* Return: pointer to concatenated string
*/
char *argstostr(int ac, char **av)
{
int i, j, len = 0, k = 0;
char *str;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
len++;
len++;
}
str = malloc(sizeof(char) * (len + 1));
if (str == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
str[k] = av[i][j];
k++;
}
str[k] = '\n';
k++;
}
str[k] = '\0';
return (str);
}
