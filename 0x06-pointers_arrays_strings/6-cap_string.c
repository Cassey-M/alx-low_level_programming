#include <stdio.h>
char *cap_string(char *s)
{
char *p = s;
int capitalize_next = 1;
while (*p != '\0')
{
if (*p >= 'a' && *p <= 'z' && capitalize_next)
{
*p = *p - ('a' - 'A');
}
if (*p == ' ' || *p == '\t' || *p == '\n' || *p == ',' || *p == ';' ||
*p == '.' || *p == '!' || *p == '?' || *p == '"' || *p == '(' ||
*p == ')' || *p == '{' || *p == '}')
{
capitalize_next = 1;
}
else
{
capitalize_next = 0;
}
p++;
}
return (s);
}
