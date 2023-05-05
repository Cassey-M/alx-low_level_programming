#include <stdio.h>
char *string_toupper(char *s)
{
char *p = s;
while (*p != '\0')
{
if (*p >= 'a' && *p <= 'z')
{
*p = *p - ('a' - 'A');
}
p++;
}
return (s);
}
