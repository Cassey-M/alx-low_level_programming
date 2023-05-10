#include "main.h"
int wildcmp(char *s1, char *s2)
{
// If both strings are empty, they are identical
if (*s1 == '\0' && *s2 == '\0')
{
return (1);
}
// If s2 is '*', it can replace any string, so we recursively
// compare the rest of s1 with all possible substrings of s2
if (*s2 == '*')
{
// Skip multiple consecutive '*' characters
while (*s2 == '*')
{
s2++;
}
// Check if s2 ends with '*'
if (*s2 == '\0')
{
return (1);
}
// For each character of s1, recursively call wildcmp with
// the remainder of s1 and s2 starting from the next character
// after the current '*' in s2for (int i = 0; s1[i] != '\0'; i++)
{
if (wildcmp(s1 + i, s2) == 1)
{
return (1);
}
}
// If we reach here, there is no substring of s1 that matches s2
return (0);
}
// If the characters at the current position of s1 and s2 match,
// continue comparing the next characters
if (*s1 == *s2)
{
return (wildcmp(s1 + 1, s2 + 1));
}
// If the characters don't match and s2 doesn't contain a '*',
// the strings are not identical
return (0);
}
