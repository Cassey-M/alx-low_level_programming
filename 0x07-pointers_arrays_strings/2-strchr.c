#include <stdio.h>
/**
* _strchr - Locate character in string
*
* @s: pointer to the string to be searched
* @c: the character to be located
*
* Return: pointer to the first occurrence of the character c in the string s,
* or NULL if the character is not found
*/
char *_strchr(char *s, char c)
{
int i;
/* Iterate through each character in the string */
for (i = 0; s[i] != '\0'; i++)
{
/* If the character is found, return a pointer to it */
if (s[i] == c)
{
return (&s[i]);
}
}
/* If the character is not found, return NULL */
return (NULL);
}
