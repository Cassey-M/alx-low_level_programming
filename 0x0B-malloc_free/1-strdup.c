#include "stdlib.h"
/**
* _strdup - Returns a pointer to a newly allocated space in memory,
* which contains a copy of the string given as a parameter.
* @str: The string to be duplicated.
*
* Return: - On success, returns a pointer to the duplicated string.
*         - NULL if insufficient memory was available.
*         - NULL if str is NULL.
*/
char *_strdup(char *str)
{
char *dup_str;
unsigned int i, len;
if (str == NULL)
return (NULL);
for (len = 0; str[len]; len++);
dup_str = malloc(sizeof(char) * (len + 1));
if (dup_str == NULL)
return (NULL);
for (i = 0; i <= len; i++)
dup_str[i] = str[i];
return (dup_str);
}
