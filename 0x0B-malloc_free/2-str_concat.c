#include <stdlib.h>
/**
* str_concat - concatenates two strings
* @s1: the first string to concatenate
* @s2: the second string to concatenate
*
* Return: On success, returns a pointer to a newly allocated string containing
* the concatenated strings. It returns NULL on failure.
*/
char *str_concat(char *s1, char *s2)
{
char *concatenated_str;
int s1_len = 0, s2_len = 0, i, j;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[s1_len])
s1_len++;
while (s2[s2_len])
s2_len++;
concatenated_str = malloc((s1_len + s2_len + 1) * sizeof(char));
if (concatenated_str == NULL)
return (NULL);
for (i = 0; i < s1_len; i++)
concatenated_str[i] = s1[i];
for (j = 0; j < s2_len; j++)
concatenated_str[i + j] = s2[j];
concatenated_str[i + j] = '\0';
return (concatenated_str);
}
